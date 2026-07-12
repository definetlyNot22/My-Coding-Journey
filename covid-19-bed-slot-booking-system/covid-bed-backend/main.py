from fastapi import FastAPI
from database import engine, Base
from routes import hospitals, bookings, auth
from fastapi.middleware.cors import CORSMiddleware

app = FastAPI(title="COVID-19 Bed Booking System")

Base.metadata.create_all(bind=engine)

app.include_router(hospitals.router)
app.include_router(bookings.router)
app.include_router(auth.router)
app.add_middleware(
    CORSMiddleware,
    allow_origins=["http://localhost:5173"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

@app.get("/")
def root():
    return {"message": "COVID-19 Bed Booking API is running"}

