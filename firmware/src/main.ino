#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32   // change to 32 if your OLED is 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
Adafruit_BME280 bme;

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  // --- BME280 INIT ---
  if (!bme.begin(0x76)) {
    Serial.println("BME280 not found");
    while (1);
  }

  // --- OLED INIT ---
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (1);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  Serial.println("System ready");
}

void loop() {
  float temp = bme.readTemperature();
  float hum  = bme.readHumidity();
  float pres = bme.readPressure() / 100.0F;

  // Serial debug output
  Serial.print("Temperature: "); Serial.print(temp);
  Serial.print(" C | Humidity: "); Serial.print(hum);
  Serial.print(" % | Pressure: "); Serial.println(pres);

  // OLED display
  display.clearDisplay();
  display.setCursor(0, 0);
  display.setTextSize(1);

  display.print("Temperature:");
  display.print(temp, 1);
  display.println("C");

  display.print("Humidity:");
  display.print(hum, 0);
  display.println("%");

  display.print("Pressure:");
  display.print(pres, 0);

  display.display();

  delay(2000);
}