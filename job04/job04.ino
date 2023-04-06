#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
const uint8_t BUTTON = 2;

void clear_screen() {
  lcd.clear();
  
  //Projet terminale STI2D
  lcd.setCursor(0, 0);
  lcd.write("Proj Trmnl STI2D");

}

void setup() {
  pinMode(BUTTON, INPUT);
  lcd.begin(16, 2);
  clear_screen();
}

uint16_t start_time = millis();

void loop() {
  uint16_t curr_time = millis();

  if (digitalRead(BUTTON) == HIGH) {
    start_time = curr_time;
    clear_screen();
  }

  lcd.setCursor(0, 1);
  lcd.print((curr_time - start_time)/1000);
  delay(1);
}
