# ESP32 Environment Station — System Block Diagram

                 I2C BUS (SDA=21, SCL=22)

      +----------------------+
      |        ESP32         |
      |                      |
      |  - Sensor Reading    |
      |  - Data Processing   |
      |  - Display Control   |
      +----------+-----------+
                 |
       -----------------------
       |                     |
       |                     |
       V                     V

+--------------+     +----------------+
|    BME280    |     |  SSD1306 OLED  |
|              |     |                |
| Temperature  |     | Display Data   |
| Humidity     |     |                |
| Pressure     |     |                |
+--------------+     +----------------+


## Hardware

- ESP32
- BME280 (I2C)
- SSD1306 OLED (I2C)

## Connections

- SDA → GPIO 21
- SCL → GPIO 22
- VCC → 3.3V
- GND → Common Ground

## Data Flow

BME280 → ESP32 → OLED