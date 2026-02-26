<div align="center">

<h1>
<font color="#00ffff">🛰 ARDUINO RADAR MONITORING SYSTEM</font>
</h1>

<h3>
<font color="#00ff88">Real-Time Object Detection</font> |
<font color="#00ccff">Distance Mapping</font> |
<font color="#ff66ff">Embedded Prototype</font>
</h3>

</div>

---

## 🧾 Tech Stack

![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino)
![Language](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B)
![Sensor](https://img.shields.io/badge/Sensor-HC--SR04-green?style=for-the-badge)
![Servo](https://img.shields.io/badge/Servo-SG90-orange?style=for-the-badge)
![Type](https://img.shields.io/badge/Project-Embedded%20System-blueviolet?style=for-the-badge)

---

<div align="center">

<table>
<tr>
<td><b><font color="#00ff88">System Mode</font></b></td>
<td><font color="#00ccff">Live Scanning</font></td>
</tr>
<tr>
<td><b><font color="#00ff88">Detection Range</font></b></td>
<td><font color="#00ccff">0° → 180°</font></td>
</tr>
<tr>
<td><b><font color="#00ff88">Distance Unit</font></b></td>
<td><font color="#00ccff">Centimeters (cm)</font></td>
</tr>
<tr>
<td><b><font color="#00ff88">Prototype Type</font></b></td>
<td><font color="#00ccff">Educational Radar Model</font></td>
</tr>
</table>

</div>

---

<h2><font color="#00ffff">🌐 PROJECT OVERVIEW</font></h2>

This Arduino-based radar system simulates a <font color="#00ff88"><b>real-time object detection mechanism</b></font> using ultrasonic sensing technology.

The ultrasonic sensor rotates using a servo motor and continuously scans its surroundings.  
At every angle, the system calculates object distance and displays real-time data on the Serial Monitor.

This creates a <font color="#00ccff"><b>radar-style scanning experience</b></font> similar to professional monitoring systems — built using low-cost embedded hardware.

⚠ <font color="#ff6666"><b>Educational small-scale prototype. Real radar systems operate using RF waves.</b></font>

---

<h2><font color="#00ffff">⚙ SYSTEM WORKFLOW</font></h2>

<font color="#00ff88">1️⃣ Servo motor rotates ultrasonic sensor</font>  
<font color="#00ccff">2️⃣ Ultrasonic pulse is transmitted</font>  
<font color="#ff66ff">3️⃣ Echo signal is received</font>  
<font color="#ffaa00">4️⃣ Return time is measured</font>  
<font color="#00ff88">5️⃣ Distance is calculated</font>  

```
Distance = (Time × 0.034) / 2
```

<font color="#00ccff">6️⃣ Angle + Distance displayed in Serial Monitor (9600 baud)</font>

---

<h2><font color="#00ffff">💻 LIVE OUTPUT SAMPLE</font></h2>

```
Angle: 32° | Distance: 40 cm
Angle: 33° | Distance: 38 cm
Angle: 34° | Distance: 36 cm
Angle: 35° | Distance: 35 cm
```

<font color="#00ff88"><b>This simulates object tracking in real-time.</b></font>

---

<h2><font color="#00ffff">🧰 HARDWARE MODULES</font></h2>

<font color="#00ff88">🔹 Arduino UNO</font>  
<font color="#00ccff">🔹 HC-SR04 Ultrasonic Sensor</font>  
<font color="#ff66ff">🔹 SG90 Servo Motor</font>  
<font color="#ffaa00">🔹 Breadboard</font>  
<font color="#00ff88">🔹 Jumper Wires</font>  
<font color="#00ccff">🔹 USB Cable</font>  

---

<h2><font color="#00ffff">🔌 PIN CONFIGURATION</font></h2>

| Device | Arduino Pin |
|--------|------------|
| Ultrasonic TRIG | <font color="#00ff88">10</font> |
| Ultrasonic ECHO | <font color="#00ff88">11</font> |
| Servo Signal | <font color="#00ff88">9</font> |
| VCC | <font color="#00ff88">5V</font> |
| GND | <font color="#00ff88">GND</font> |

---

<h2><font color="#00ffff">🧠 CORE FEATURES</font></h2>

<font color="#00ff88">✔ 180° Rotational Scanning</font>  
<font color="#00ccff">✔ Real-Time Object Detection</font>  
<font color="#ff66ff">✔ Live Distance Mapping</font>  
<font color="#ffaa00">✔ Lightweight Embedded Architecture</font>  
<font color="#00ff88">✔ Expandable for Graphical Radar UI</font>  
<font color="#00ccff">✔ Academic Demonstration Model</font>  

---

<h2><font color="#00ffff">🔮 FUTURE ENHANCEMENTS</font></h2>

🔸 OLED / LCD Integration  
🔸 Buzzer Alert  
🔸 IoT Monitoring  
🔸 Raspberry Pi Dashboard  
🔸 Python Radar UI  
🔸 AI-Based Object Classification  
🔸 3D Printed Enclosure  

---

<h2><font color="#00ffff">📂 PROJECT STRUCTURE</font></h2>

```
Radar-System/
│
├── radar_system.ino
├── circuit-diagram.png
├── 3d-model.png
└── README.md
```

---

<h2><font color="#00ffff">👨‍💻 DEVELOPER PROFILE</font></h2>

<b><font color="#00ffcc">Roshan Gupta</font></b>  
Embedded-Innovation-Lab  
Bachelor of Computer Applications (BCA)

---

<h2><font color="#00ffff">🔗 PROFESSIONAL NETWORK</font></h2>

LinkedIn:  
<font color="#00ccff">https://www.linkedin.com/in/roshan-gupta-rg7755</font>

---

<h2><font color="#00ffff">⭐ SUPPORT THE PROJECT</font></h2>

⭐ Star the repository  
🍴 Fork it  
🔗 Share on LinkedIn  

---

<h2><font color="#00ffff">📜 LICENSE</font></h2>

Open-source for educational and innovation purposes.
