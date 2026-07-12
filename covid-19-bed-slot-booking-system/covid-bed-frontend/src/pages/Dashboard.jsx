import { useState } from "react";
import api from "../api/axios";

function Dashboard() {
  const [city, setCity] = useState("");
  const [hospitals, setHospitals] = useState([]);
  const [message, setMessage] = useState("");

  const searchHospitals = async () => {
    const res = await api.get("/hospitals/", { params: { city } });
    setHospitals(res.data);
  };

  const bookBed = async (hospitalId, bedType) => {
    try {
      await api.post("/bookings/", { hospital_id: hospitalId, bed_type: bedType });
      setMessage("Booking successful!");
      searchHospitals(); // refresh bed counts
    } catch (err) {
      setMessage(err.response?.data?.detail || "Booking failed");
    }
  };

  return (
    <div className="dashboard">
      <h2>Find a Hospital Bed</h2>
      <input
        placeholder="Enter city"
        value={city}
        onChange={(e) => setCity(e.target.value)}
      />
      <button onClick={searchHospitals}>Search</button>

      {message && <p>{message}</p>}

      <div className="hospital-list">
        {hospitals.map((h) => (
          <div key={h.id} className="hospital-card">
            <h3>{h.name}</h3>
            <p>{h.city}</p>
            <p style={{ color: h.general_beds > 0 ? "#4ade80" : "#f87171" }}>
              General: {h.general_beds}
            </p>
            <p style={{ color: h.icu_beds > 0 ? "#4ade80" : "#f87171" }}>
              ICU: {h.icu_beds}
            </p>
            <p style={{ color: h.ventilator_beds > 0 ? "#4ade80" : "#f87171" }}>
              Ventilator: {h.ventilator_beds}
            </p>
            <button onClick={() => bookBed(h.id, "general")}>Book General</button>
            <button onClick={() => bookBed(h.id, "icu")}>Book ICU</button>
            <button onClick={() => bookBed(h.id, "ventilator")}>Book Ventilator</button>
          </div>
        ))}
      </div>
    </div>
  );
}

export default Dashboard;