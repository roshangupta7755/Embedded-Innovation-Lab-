# Radar System

This project demonstrates a basic **radar-like object detection system** that uses an ultrasonic sensor and microcontroller to scan and detect objects within range. The goal is to visualize how a simple radar works using cost-effective components and embedded programming techniques.

---

## 🛰️ Project Overview

A radar system is a sensing device that detects objects and measures their distance and position within a specific area. This implementation uses an ultrasonic sensor that emits sound waves and detects echo signals to calculate the distance to nearby objects. The sensor is mounted on a rotating mechanism to simulate a radar scanning effect, and the microcontroller processes the data to display useful readings. :contentReference[oaicite:0]{index=0}

---

## 🧰 Components Required

| Component | Description |
|-----------|-------------|
| Ultrasonic Sensor (e.g., HC-SR04) | Detects distance by sending and receiving sound pulses |
| Servo Motor | Rotates the sensor to scan different angles |
| Microcontroller (Arduino / ESP32 / etc.) | Reads sensor data and controls servo |
| Jumper Wires | For connections |
| Breadboard | For prototyping |
| Power Source | 5V DC supply |

---

## ⚙️ Working Principle

1. The **microcontroller** triggers the ultrasonic sensor to send ultrasonic waves.  
2. These waves bounce off nearby objects and return to the sensor.  
3. The time taken for the echo to return is measured.  
4. Using this time, the distance is calculated.  
5. A **servo motor** rotates the sensor slowly to scan across angles, simulating a radar sweep.  
6. Data is processed and displayed in the serial monitor or on a graphical interface (if available). :contentReference[oaicite:1]{index=1}

---

## 📁 Project Structure
