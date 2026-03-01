# 🚦 Automatic Toll Gate System

An embedded systems based **Automatic Toll Gate System** built using Arduino and sensors that automatically detects vehicles, opens a gate, and logs toll transactions — designed for smart transportation automation.

---

## 🧾 Tech Stack

![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino)
![Language](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B)
![Sensor](https://img.shields.io/badge/Sensor-Ultrasonic-blue?style=for-the-badge)
![Actuator](https://img.shields.io/badge/Actuator-Servo%2FMotor-orange?style=for-the-badge)
![Project](https://img.shields.io/badge/Project-Automation-green?style=for-the-badge)

---

## 📍 Project Overview

The **Automatic Toll Gate System** is a smart prototype that automates toll collection by:

✔ Detecting vehicles using sensors  
✔ Opening the toll gate automatically  
✔ Logging vehicle passage  
✔ Reducing manual effort  

This is a low-cost embedded solution designed for educational purposes and transportation automation learning.

⚠️ Note: This is an academic prototype and not a full commercial system.

---

## 🧰 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino UNO | 1 |
| Ultrasonic Sensor (HC-SR04) | 1 |
| Servo Motor (SG90) | 1 |
| LCD Display (16×2) | 1 |
| Push Buttons (optional) | 2 |
| Resistors / Jumper Wires | As required |
| Breadboard | 1 |
| USB Power Cable | 1 |

---

## 🔌 Circuit Connections

| Device | Arduino Pin |
|--------|------------|
| HC-SR04 TRIG | 10 |
| HC-SR04 ECHO | 11 |
| Servo Motor | 9 |
| LCD RS | 7 |
| LCD E | 8 |
| LCD D4 | 4 |
| LCD D5 | 5 |
| LCD D6 | 6 |
| LCD D7 | 3 |
| VCC | 5V |
| GND | GND |

Make sure the power supply is stable and all components are correctly grounded.

---

## ⚙️ Working Principle

1. The ultrasonic sensor continuously checks for approaching vehicles.  
2. When a vehicle is detected (distance threshold reached), the system triggers the servo motor.  
3. The servo motor opens the toll gate automatically.  
4. The LCD displays a message (e.g., “Gate Open / Vehicle Detected”).  
5. After a short delay, the gate closes automatically.  
6. Optional: Button controls for manual override.

---

## 💻 Arduino Code

Open the file `automatic_toll_gate_system.ino` (or your Arduino sketch file) in the Arduino IDE and upload it to the board.

Use **Serial Monitor (9600 baud)** (if required) to view distance values or debug logs.
