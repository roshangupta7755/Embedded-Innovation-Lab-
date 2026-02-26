# 📡 Arduino Radar System

An Arduino-based radar simulation system that detects objects using an ultrasonic sensor and displays real-time distance measurements while rotating with a servo motor.

This project is part of the **Embedded-Innovation-Lab** repository.

---

## 🛰️ Project Overview

This project simulates a simple radar system using ultrasonic sound waves.

The ultrasonic sensor rotates from 0° to 180° using a servo motor and detects nearby objects. Distance data is calculated and displayed through the Serial Monitor.

> ⚠️ Note: This is an educational prototype. Real radar systems use radio frequency waves.

---

## 🧰 Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90)
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connections

| Component | Arduino Pin |
|-----------|------------|
| Ultrasonic TRIG | 10 |
| Ultrasonic ECHO | 11 |
| Servo Signal | 9 |
| VCC | 5V |
| GND | GND |

---

## ⚙️ Working Principle

1. Servo rotates from 0° to 180°.
2. Ultrasonic sensor sends sound pulse.
3. Echo returns after hitting object.
4. Distance is calculated using:

   Distance = (Time × Speed of Sound) / 2

5. Distance is printed in Serial Monitor.

---

## 💻 Arduino Code

File: `radar_system.ino`

Upload the code using Arduino IDE.
Open Serial Monitor at 9600 baud rate.

---

## 🖥️ 3D Model

You can create a 3D model using:
- Tinkercad
- Fusion 360
- Blender

3D Model includes:
- Base platform
- Servo mount
- Ultrasonic holder
- Optional protective dome

---

## 🚀 Features

✔ 180° scanning  
✔ Real-time distance detection  
✔ Simple and low-cost setup  
✔ Expandable to graphical radar visualization  

---

## 🔮 Future Improvements

- Add LCD/OLED display
- Add buzzer alert
- Integrate with Raspberry Pi
- Add wireless monitoring

---

## 📂 Folder Structure
Radar-System/
├── radar_system.ino
├── circuit-diagram.png
├── 3d-model.png
└── README.md


---

## 👨‍💻 Developed By

Roshan Gupta  
Embedded-Innovation-Lab  
Bachelor of Computer Applications (BCA)

---

## 📜 License

Open-source for educational and innovation purposes.
