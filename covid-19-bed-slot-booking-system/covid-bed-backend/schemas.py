from pydantic import BaseModel

class HospitalOut(BaseModel):
    id: int
    name: str
    city: str
    general_beds: int
    icu_beds: int
    ventilator_beds: int

    class Config:
        from_attributes = True

class BookingCreate(BaseModel):
    hospital_id: int
    bed_type: str  # "general", "icu", or "ventilator"

class BookingOut(BaseModel):
    id: int
    user_id: int
    hospital_id: int
    bed_type: str
    status: str

    class Config:
        from_attributes = True



class UserCreate(BaseModel):
    name: str
    email: str
    password: str

class UserLogin(BaseModel):
    email: str
    password: str

class UserOut(BaseModel):
    id: int
    name: str
    email: str
    role: str

    class Config:
        from_attributes = True

class Token(BaseModel):
    access_token: str
    token_type: str