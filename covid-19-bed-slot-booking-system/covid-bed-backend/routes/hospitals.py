from fastapi import APIRouter, Depends
from sqlalchemy.orm import Session
from sqlalchemy import or_
from database import get_db
from models import Hospital
from schemas import HospitalOut
from typing import List, Optional

router = APIRouter(prefix="/hospitals", tags=["Hospitals"])

@router.get("/", response_model=List[HospitalOut])
def get_hospitals(city: Optional[str] = None, db: Session = Depends(get_db)):
    query = db.query(Hospital)
    if city:
        query = query.filter(Hospital.city == city)
    return query.all()