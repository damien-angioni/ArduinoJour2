#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  byte emoji[8] = {
    B00000,
    B10001,
    B00000,
    B00000,
    B10001,
    B01110,
    B00000,
    B00000
  };

  lcd.createChar(0, emoji);

  lcd.begin(16, 2);
  lcd.clear();

  lcd.write(byte(0));
}

void loop() {
  
}
