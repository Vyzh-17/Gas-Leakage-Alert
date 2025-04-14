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
  
## ✅ Testing Instructions

- Upload the code to your Arduino Uno using the Arduino IDE.  
- Open the Serial Monitor (9600 baud) to observe raw sensor values.  
- Bring a lighter (unlit) or a small gas source near the sensor.  
- When the gas level crosses a threshold, the buzzer will beep, and the LCD will display a **DANGER** alert.  

## 🛠️ Troubleshooting

- **LCD shows nothing**: Try changing I2C address from `0x27` to `0x3F`.  
- **Gas value is stuck**: Adjust the formula or calibrate your sensor.  
- **No buzzer sound**: Try a basic test in `setup()`:
- tone(buzzer, 1000);
delay(1000);
noTone(buzzer);


## 🚀 Possible Upgrades

- Add LED indicators for better visibility  
- Send alerts via Wi-Fi (ESP8266/ESP32)  
- Log readings to an SD card or cloud  
- Integrate with home automation systems  
