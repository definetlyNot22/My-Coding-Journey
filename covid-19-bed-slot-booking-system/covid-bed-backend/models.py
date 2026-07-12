from sqlalchemy import Column, Integer, String, Enum, ForeignKey, TIMESTAMP
from sqlalchemy.sql import func
from database import Base

class Hospital(Base):
    __tablename__ = "hospitals"
    id = Column(Integer, primary_key=True, index=True)
    name = Column(String(100))
    city = Column(String(50))
    general_beds = Column(Integer, default=0)
    icu_beds = Column(Integer, default=0)
    ventilator_beds = Column(Integer, default=0)

class User(Base):
    __tablename__ = "users"
    id = Column(Integer, primary_key=True, index=True)
    name = Column(String(100))
    email = Column(String(100), unique=True)
    password_hash = Column(String(255))
    role = Column(Enum("patient", "admin"), default="patient")

class Booking(Base):
    __tablename__ = "bookings"
    id = Column(Integer, primary_key=True, index=True)
    user_id = Column(Integer, ForeignKey("users.id"))
    hospital_id = Column(Integer, ForeignKey("hospitals.id"))
    bed_type = Column(Enum("general", "icu", "ventilator"))
    status = Column(Enum("pending", "confirmed", "cancelled"), default="pending")
    booking_date = Column(TIMESTAMP, server_default=func.now())