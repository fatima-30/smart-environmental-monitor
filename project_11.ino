#include <LiquidCrystal.h>

#define TMPPIN A0
#define HUMPIN A1

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Env Monitor");
  delay(1500);
}

void loop() {
  int tmpRaw = analogRead(TMPPIN);
  float voltage = tmpRaw * (5.0 / 1023.0);
  float tempC = (voltage - 0.5) * 100.0;

  int humRaw = analogRead(HUMPIN);
  float humidity = map(humRaw, 0, 1023, 0, 100);

  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.print(" C  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(humidity);
  lcd.print("%");

  delay(2000);
}