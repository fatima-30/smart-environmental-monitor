🌡️ Smart Environmental Monitor

A microcontroller-based project that reads real-time temperature and humidity data using a DHT11/DHT22 sensor and displays it on an I2C LCD screen or Serial Monitor.


📌 Project Overview

This project connects a DHT11/DHT22 sensor to an ESP32/Arduino development board to sample ambient environmental data every 2 seconds and render it clearly on a local display.


🛠️ Components Used

ComponentDetailsMicrocontrollerESP32 / ArduinoSensorDHT11 / DHT22 (Temperature & Humidity)DisplayI2C LCD Screen / Serial MonitorPlatformTinkerCAD (Simulation)


⚙️ How It Works


The DHT sensor is wired to a GPIO pin on the ESP32/Arduino board
The void loop() function runs continuously, sampling data every 2 seconds
Temperature (°C) and Humidity (%) readings are fetched from the sensor
The data is rendered live on an I2C LCD screen or the Serial Monitor
