from fastapi import APIRouter, Depends, HTTPException
from sqlalchemy.orm import Session
from database import get_db
from models import Booking, Hospital, User
from schemas import BookingCreate, BookingOut
from auth_utils import get_current_user

router = APIRouter(prefix="/bookings", tags=["Bookings"])

@router.post("/", response_model=BookingOut)
def create_booking(booking: BookingCreate, db: Session = Depends(get_db), current_user: User = Depends(get_current_user)):
    hospital = db.query(Hospital).filter(Hospital.id == booking.hospital_id).first()
    if not hospital:
        raise HTTPException(status_code=404, detail="Hospital not found")

    # Map bed_type to the right column
    bed_column_map = {
        "general": "general_beds",
        "icu": "icu_beds",
        "ventilator": "ventilator_beds"
    }
    bed_field = bed_column_map.get(booking.bed_type)
    if not bed_field:
        raise HTTPException(status_code=400, detail="Invalid bed type")

    current_count = getattr(hospital, bed_field)
    if current_count <= 0:
        raise HTTPException(status_code=400, detail=f"No {booking.bed_type} beds available")

    # Reduce bed count and create booking
    setattr(hospital, bed_field, current_count - 1)
    new_booking = Booking(
        user_id=current_user.id,
        hospital_id=booking.hospital_id,
        bed_type=booking.bed_type,
        status="pending"
    )
    db.add(new_booking)
    db.commit()
    db.refresh(new_booking)
    return new_booking