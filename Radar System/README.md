# 📡 Arduino Radar System  

<p align="center">
  <img src="https://media.giphy.com/media/26BRuo6sLetdllPAQ/giphy.gif" width="500">
</p>

<p align="center">
  <b>Real-Time Object Detection & Radar-Style Scanning System</b>
</p>

---

## 🚀 Project Description

This project simulates a real-time radar scanning system using:

- Arduino UNO  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motor  

The system rotates the ultrasonic sensor from **0° to 180°** and continuously detects objects in its path.

At each angle:

- Object distance is calculated  
- Angle + distance data is sent to the Serial Monitor  
- Live detection results are displayed  

This creates a radar-style scanning behavior similar to real radar systems.

⚠️ Note: This is a small-scale educational prototype using ultrasonic waves instead of RF signals.

---

## 🛰️ Real-Time Monitoring

The system displays:

- Current scanning angle  
- Distance of detected object (in cm)  
- Continuous live updates  

Example Serial Monitor Output:

```
Angle: 45 | Distance: 32 cm
Angle: 46 | Distance: 30 cm
Angle: 47 | Distance: 28 cm
```

This simulates how a radar system tracks object position and distance in real time.

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
| Servo Motor Signal | 9 |
| VCC | 5V |
| GND | GND |

---

## ⚙️ Working Principle

1. Servo rotates ultrasonic sensor.
2. Sensor emits ultrasonic pulse.
3. Echo signal returns after hitting object.
4. Arduino measures return time.
5. Distance is calculated using:

   Distance = (Time × 0.034) / 2

6. Data is printed on Serial Monitor at 9600 baud.

This produces a radar-like scanning and object detection effect.

---

## 🖥️ 3D Model Enhancement

For a futuristic look, this project can include:

- 3D printed rotating base  
- Ultrasonic sensor mount  
- Transparent radar dome  
- Compact enclosure design  

Tools you can use:

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

## 🚀 Key Features

- 180° scanning motion  
- Real-time object detection  
- Live angle + distance display  
- Low-cost embedded system prototype  
- Educational radar simulation  

---

## 🔮 Future Scope

- Graphical radar interface using Processing  
- Python-based real-time visualization  
- OLED display integration  
- Buzzer proximity alert  
- IoT-based remote monitoring  
- AI-based object classification  

---

## 🎯 Applications

- Robotics navigation  
- Obstacle detection systems  
- Smart surveillance prototypes  
- Embedded systems lab demonstrations  

---

## 👨‍💻 Developed By

**Roshan Gupta**  
Embedded-Innovation-Lab  
Bachelor of Computer Applications (BCA)

---

## 🔗 Connect With Me

LinkedIn:  
https://www.linkedin.com/in/roshan-gupta-rg7755  

Future working demos and project updates will be shared there.

---

## ⭐ Support

If you found this project helpful:

⭐ Star the repository  
🍴 Fork it  
🔗 Share on LinkedIn  

---

## 📜 License

Open-source for educational and innovation purposes.
