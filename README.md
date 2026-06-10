# esp32-environment-station

An embedded environmental monitoring system built using an ESP32 microcontroller, a BME280 environmental sensor, and an SSD1306 OLED display.

The system collects live environmental data and displays measurements directly on-device.

---

## Features

- Real-time temperature measurement
- Real-time humidity measurement
- Real-time atmospheric pressure measurement
- OLED live display output
- Shared I2C communication bus
- Serial debugging output

---

## Hardware

- ESP32 (ESP-WROOM-32)
- BME280 environmental sensor
- SSD1306 OLED display
- Breadboard
- Jumper wires

---

## Software

- Arduino IDE
- C++
- I2C communication
- Adafruit BME280 Library
- Adafruit SSD1306 Library

---

## System Architecture

Sensor readings are collected by the ESP32 over I2C.

Data is processed and displayed on the OLED while also being streamed to Serial Monitor.

See:

docs/block_diagram.md

---

## Wiring

| Component | Connection |
|-----------|------------|
|    SDA    |   GPIO 21  |
|    SCL    |   GPIO 22  |
|   Power   |    3.3V    |
|   Ground  |    GND     |

---

## Current Output

OLED:
- Temperature
- Humidity
- Pressure

Serial Monitor:
- Debug output
- Live measurements

---

## Repository Structure

```
firmware/
docs/
hardware/
README.md
```

---

## Lessons Learned

- Debugging I2C communication
- Configuring multi-device buses
- Troubleshooting hardware connection issues
- Integrating embedded firmware with external peripherals

---

## Future Improvements

- Data logging
- Custom PCB design
- Fusion 360 enclosure
- WiFi connectivity
- Improved display UI