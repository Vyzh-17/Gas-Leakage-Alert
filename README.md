# Gas-Leakage-Alert using Arduino

This project detects gas levels using a gas sensor (like MQ-2 or MQ-135), displays the readings on a 16x2 LCD, and triggers a buzzer if the gas concentration exceeds a defined safe threshold. Ideal for home safety and basic environmental monitoring.

## 📦 Components Required

- Arduino Uno
- MQ-2 / MQ-135 Gas Sensor
- 16x2 LCD Display (with I2C Module)
- Buzzer
- Breadboard and Jumper Wires
- USB Cable
- Optional: 220Ω Resistor for buzzer

## 🔌 Wiring Guide

### LCD with I2C:
- **VCC** → 5V  
- **GND** → GND  
- **SDA** → A4  
- **SCL** → A5  

### Gas Sensor:
- **VCC** → 5V  
- **GND** → GND  
- **A0** → A0  

### Buzzer:
- **+** → D13  
- **-** → GND  
