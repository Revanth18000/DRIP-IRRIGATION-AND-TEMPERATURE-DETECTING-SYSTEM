# DRIP-IRRIGATION-AND-TEMPERATURE-DETECTING-SYSTEM

🌱 Smart Drip Irrigation System using Arduino UNO 💧
This project is an IoT-based automatic drip irrigation system that monitors soil moisture and temperature in real-time using sensors and automatically waters the plant when the soil is dry. It aims to reduce water wastage and ensure healthy plant growth, making it ideal for small-scale gardens and smart agriculture.

📌 Features
🌡️ Real-time temperature and humidity monitoring using DHT11
🌱 Soil moisture sensing to determine wet or dry conditions
💧 Automatic water control via a relay module connected to a water pump
📟 Live data display on a 16x2 LCD screen
💡 Arduino-based logic for simple, cost-effective implementation

🧰 Components Used
Component	Description
Arduino UNO	Microcontroller board
DHT11	Temperature & Humidity sensor
Soil Moisture Sensor	Detects wet/dry soil condition
16x2 LCD Display	Displays temperature and soil status
Relay Module	Controls the water pump
Jumper Wires	For circuit connections
Breadboard / PCB	For circuit assembly
Mini Water Pump + Pipe	Delivers water to the plant
Power Supply	5V / 9V DC (depending on pump requirements)

⚙️ How It Works
The soil moisture sensor checks if the soil is dry or wet.
The DHT11 sensor reads the ambient temperature and humidity.
Values are displayed on the LCD screen.
If the soil is dry, the Arduino activates the relay, turning on the water pump.
Once the soil is adequately moist, the system stops watering automatically.

🖥️ Circuit Diagram
CIRCUIT DIAGRAM PROVIDED 
📸 Project Images
IMAGES ARE PROVIDED

💻 Arduino Code
The Smart_Drip_Irrigation.ino file contains the full code.
Make sure to install the necessary libraries:
DHT.h for DHT11
LiquidCrystal.h for LCD

📦 How to Run
Connect all components as per the circuit diagram.
Upload the Arduino code using the Arduino IDE.
Power on the Arduino board.
Monitor the LCD for real-time data.
Watch the system water your plant when the soil goes dry!

🚀 Future Improvements
Add Wi-Fi or Bluetooth for remote monitoring.
Integrate with Blynk or ThingSpeak for cloud data logging.
Solar-powered operation for sustainability.

🧠 Learnings
Basics of IoT and sensor integration
Embedded programming with Arduino
Real-time data monitoring and decision automation
Importance of smart systems in agriculture

📫 Connect with Me
Feel free to connect or collaborate!

🔗 [www.linkedin.com/in/revanth-amudalapalli-6548062a3]
📧 [revanth.amudalapalli@gmail.com]
