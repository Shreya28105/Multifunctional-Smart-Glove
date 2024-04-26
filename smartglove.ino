#include <LiquidCrystal.h>


#define LM35_PIN A0
#define GYRO_PIN A1
#define FLEX_PIN A2
#define HEART_RATE_PIN A3
#define LCD_RS 12
#define LCD_EN 11
#define LCD_D4 5
#define LCD_D5 4
#define LCD_D6 3
#define LCD_D7 2


LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  
  lcd.begin(16, 2);

  
  Serial.begin(9600);
}

void loop() {
  
  int temperature = analogRead(LM35_PIN);
  int gyroValue = analogRead(GYRO_PIN);
  int flexValue = analogRead(FLEX_PIN);
  int heartRateValue = analogRead(HEART_RATE_PIN);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Gyro: ");
  lcd.print(gyroValue);

  delay(1000); 
}

