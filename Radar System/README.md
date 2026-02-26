# 📡 Arduino Radar System

A real-time object detection and scanning system built using Arduino, ultrasonic sensing, and servo motor control.

This project demonstrates how embedded systems can simulate radar-like scanning using low-cost components. It is part of the **Embedded-Innovation-Lab** and is developed for academic learning, experimentation, and innovation.

---

## 🛰️ About The Project

The Arduino Radar System rotates an ultrasonic sensor between 0° and 180° using a servo motor. At every angle, it measures the distance of nearby objects and sends real-time data to the Serial Monitor.

Although this system mimics radar behavior visually, it uses ultrasonic sound waves instead of RF signals.

> ⚠️ Educational Prototype – Not a real RF radar system.

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

## ⚙️ How It Works

1. Servo motor rotates the ultrasonic sensor.  
2. The sensor emits ultrasonic pulses.  
3. Sound waves reflect from nearby objects.  
4. Echo return time is measured.  
5. Distance is calculated using:  

   ```
   Distance = (Time × 0.034) / 2
   ```

6. Angle and distance are printed on Serial Monitor (9600 baud).  

This creates a scanning radar-like effect.

---

## 💻 Source Code

Main file:

```
radar_system.ino
```

Upload using Arduino IDE and open Serial Monitor at **9600 baud rate**.

---

## 🖥️ 3D Model Concept

This project can be enhanced using a custom 3D-printed structure including:

- Stable base platform  
- Servo mounting bracket  
- Ultrasonic sensor holder  
- Optional transparent dome  

You can design the model using:

- Tinkercad  
- Fusion 360  
- Blender  
- SolidWorks  

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

- 180° scanning range  
- Real-time object detection  
- Lightweight and low-cost system  
- Expandable architecture  
- Ideal for embedded systems demonstrations  

---

## 🔮 Future Enhancements

- OLED/LCD Display Integration  
- Buzzer alert for close-range detection  
- IoT dashboard integration  
- Raspberry Pi graphical interface  
- Real-time radar visualization using Processing or Python  
- 3D printed enclosure for professional finish  

---

## 🎯 Applications

- Obstacle detection systems  
- Robotics navigation  
- Smart surveillance prototypes  
- Embedded systems lab experiments  
- Academic project demonstrations  

---

## 👨‍💻 Developed By

**Roshan Gupta**  
Embedded-Innovation-Lab  
Bachelor of Computer Applications (BCA)

---

## 🔗 Connect With Me

LinkedIn Profile:  
https://www.linkedin.com/in/roshan-gupta-rg7755  

Future project updates and working demonstrations will also be shared on LinkedIn.

---

## 📢 LinkedIn Sharing Tags

#EmbeddedSystems  
#ArduinoProjects  
#IoT  
#EngineeringProjects  
#Innovation  
#BCAProjects  

---

## ⭐ Support

If you found this project helpful:

- ⭐ Star the repository  
- 🍴 Fork it  
- 🔗 Share on LinkedIn  

---

## 📜 License

This project is open-source and available for educational and innovation purposes.
