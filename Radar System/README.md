# 📡 Arduino Radar System

An Arduino-based radar simulation system that detects objects using an ultrasonic sensor and displays real-time distance measurements while rotating with a servo motor.

This project is part of the **Embedded-Innovation-Lab** repository and is designed for academic learning, experimentation, and innovation.

---

## 🛰️ Project Overview

This project simulates a basic radar system using ultrasonic sound waves.

The ultrasonic sensor rotates from 0° to 180° using a servo motor and continuously scans its surroundings. When an object is detected, the distance is calculated and displayed via Serial Monitor.

> ⚠️ Note: This is an educational prototype. Real radar systems use radio frequency (RF) waves instead of ultrasonic waves.

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
2. Ultrasonic sensor sends a sound pulse.
3. Echo returns after hitting an object.
4. Distance is calculated using:

   Distance = (Time × Speed of Sound) / 2

5. Distance data is printed in Serial Monitor (9600 baud rate).

---

## 💻 Arduino Code

File: `radar_system.ino`  
Upload using Arduino IDE and open Serial Monitor at **9600 baud rate**.

---

## 🖥️ 3D Model Concept

The 3D model includes:

- Base platform
- Servo motor mount
- Ultrasonic sensor holder
- Optional protective dome

3D design tools you can use:
- Tinkercad
- Fusion 360
- Blender
- SolidWorks

---

## 📂 Folder Structure
Radar-System/
├── radar_system.ino
├── circuit-diagram.png
├── 3d-model.png
└── README.md


---

## 🚀 Features

✔ 180° scanning  
✔ Real-time distance detection  
✔ Low-cost implementation  
✔ Expandable for graphical radar visualization  
✔ Suitable for academic demonstrations  

---

## 🔮 Future Improvements

- Add LCD/OLED display
- Add buzzer alert for close objects
- Integrate with Raspberry Pi
- Wireless monitoring via IoT
- Real-time graphical radar using Processing / Python

---

## 🎯 Applications

- Obstacle Detection
- Robotics Navigation
- Smart Security Systems
- Embedded Systems Learning

---

## 👨‍💻 Developed By

**Roshan Gupta**  
Embedded-Innovation-Lab  
Bachelor of Computer Applications (BCA)

---

## 🔗 Connect With Me

If you liked this project, feel free to connect with me on LinkedIn:

👉 Add your LinkedIn profile link here:

[LinkedIn Profile](https://www.linkedin.com/in/YOUR-LINK-HERE)

---

## ⭐ Support

If you found this project helpful:

- ⭐ Star this repository
- 🍴 Fork it
- 🔗 Share on LinkedIn

---

## 📜 License

This project is open-source and available for educational and innovation purposes.
