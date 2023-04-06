#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();

  float tA0 = analogRead(A0)*5.0/1023.0;
  float tA1 = analogRead(A1)*5.0/1023.0;
  float tA2 = analogRead(A2)*5.0/1023.0;
  float tA3 = analogRead(A3)*5.0/1023.0;
  float tA4 = analogRead(A4)*5.0/1023.0;
  float tA5 = analogRead(A5)*5.0/1023.0;

  lcd.print(tA0);
  lcd.setCursor(6, 0);
  lcd.print(tA1);
  lcd.setCursor(12, 0);
  lcd.print(tA2);
  lcd.setCursor(0, 1);
  lcd.print(tA3);
  lcd.setCursor(6, 1);
  lcd.print(tA4);
  lcd.setCursor(12, 1);
  lcd.print(tA5);
}

void loop() {
  
}
