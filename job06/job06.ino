#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

char clock[8] = "XX:XX:XX";

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  uint32_t time = millis();

  int hours, mins, secs;

  //86 400 secs in 24 hours
  //3600 secs in 1 hour
  int day_seconds = (time/1000) % 86400;
  secs = day_seconds % 60;
  mins = day_seconds / 60;
  hours = mins % 24;
  mins = mins % 60;

  sprintf(clock, "%2d:%2d:%2d", hours, mins, secs);

  lcd.setCursor(0, 0);
  lcd.print(clock);

  delay(1);
}
