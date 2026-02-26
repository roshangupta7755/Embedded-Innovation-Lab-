# 📡 Arduino Radar System  

<p align="center">
  <img src="https://media.giphy.com/media/l3vR85PnGsBwu1PFK/giphy.gif" width="500">
</p>

<p align="center">
  <b>⚡ Real-Time Ultrasonic Object Detection & Scanning System ⚡</b>
</p>

---

## 🚀 Project Vision

A futuristic radar simulation system built using Arduino, ultrasonic sensing, and servo motor control.

This project recreates a radar-style scanning interface using low-cost embedded components and demonstrates real-time object detection principles used in robotics and automation.

Part of the **Embedded-Innovation-Lab** initiative.

---

## 🛰️ System Overview

The system rotates an ultrasonic sensor from 0° to 180° using a servo motor.

At every angle:

- Ultrasonic pulse is transmitted  
- Echo signal is received  
- Distance is calculated  
- Angle + Distance data is displayed  

⚠️ Note: This is an ultrasonic-based educational prototype. Real radar systems operate using RF waves.

---

## 🎥 Radar Scan Visualization (Concept)

<p align="center">
  <img src="https://media.giphy.com/media/3o7TKtnuHOHHUjR38Y/giphy.gif" width="450">
</p>

This animation represents the radar-style scanning concept implemented in this project.

---

## 🧰 Hardware Components

- Arduino UNO  
- HC-SR04 Ultrasonic Sensor  
- SG90 Servo Motor  
- Breadboard  
- Jumper Wires  
- USB Cable  

---

## 🔌 Pin Configuration

| Device | Arduino Pin |
|--------|------------|
| Ultrasonic TRIG | 10 |
| Ultrasonic ECHO | 11 |
| Servo Signal | 9 |
| VCC | 5V |
| GND | GND |

---

## ⚙️ Working Algorithm

1. Rotate servo motor  
2. Trigger ultrasonic pulse  
3. Measure echo return time  
4. Calculate distance  

```
Distance = (Time × 0.034) / 2
```

5. Print results to Serial Monitor (9600 baud)

---

## 🖥️ 3D Model Concept

Designed for future expansion with:

- 3D Printed Base  
- Servo Mount Bracket  
- Ultrasonic Holder  
- Transparent Radar Dome  

Can be designed using:

- Fusion 360  
- Blender  
- SolidWorks  
- Tinkercad  

---

## 📂 Project Folder Structure

```
Radar-System/
│
├── radar_system.ino
├── circuit-diagram.png
├── 3d-model.png
└── README.md
```

---

## 🚀 Features

- 180° scanning motion  
- Real-time distance calculation  
- Radar-style visualization support  
- Expandable to graphical interface  
- Embedded system demonstration model  

---

## 🔮 Future Scope

- OLED/LCD Integration  
- Buzzer proximity alert  
- Raspberry Pi radar visualization  
- IoT-based remote monitoring  
- AI-based object classification  
- Fully enclosed 3D printed futuristic casing  

---

## 🎯 Applications

- Robotics Navigation  
- Smart Surveillance Systems  
- Obstacle Detection  
- Embedded Systems Lab Projects  
- Academic Demonstration  

---

## 👨‍💻 Developed By

**Roshan Gupta**  
Embedded-Innovation-Lab  
Bachelor of Computer Applications (BCA)

---

## 🔗 Connect With Me

🌐 LinkedIn:  
https://www.linkedin.com/in/roshan-gupta-rg7755  

Future updates and project demonstrations will be shared there.

---

## ⭐ Support

If you found this project impressive:

⭐ Star the repository  
🍴 Fork it  
🔗 Share on LinkedIn  

---

## 📜 License

Open-source for educational and innovation purposes.
