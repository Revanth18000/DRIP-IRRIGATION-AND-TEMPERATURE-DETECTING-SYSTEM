// Pin definitions
#define RELAY_PIN 3
#define SOIL_SENSOR_PIN 6
#define DHT_PIN 7
#define DHT_TYPE DHT11

// Initialize DHT and LCD
DHT dht(DHT_PIN, DHT_TYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address might be 0x27 or 0x3F

int water;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SOIL_SENSOR_PIN, INPUT);
  
  dht.begin();
  lcd.init(); 
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("System Starting...");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read soil moisture
  water = digitalRead(SOIL_SENSOR_PIN);

  // Control relay based on soil moisture
  if(water == HIGH) {
    digitalWrite(RELAY_PIN, LOW); // Turn off water pump
  } else {
    digitalWrite(RELAY_PIN, HIGH); // Turn on water pump
  }

  // Read temperature and humidity from DHT11
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  // Display temperature and humidity
  lcd.setCursor(0, 0);
  lcd.print("T:");
  if (isnan(temp)) {
    lcd.print("Err ");
  } else {
    lcd.print(temp);
    lcd.print("C ");
  }

  lcd.print("H:");
  if (isnan(hum)) {
    lcd.print("Err");
  } else {
    lcd.print(hum);
    lcd.print("%");
  }

  lcd.setCursor(0, 1);
  if(water == HIGH) {
    lcd.print("Soil: Wet       ");
  } else {
    lcd.print("Soil: Dry       ");
  }

  delay(2000); // Wait before next loop
}
