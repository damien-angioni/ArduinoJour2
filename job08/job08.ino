#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
byte filled[8] {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

boolean complete = false;
int progress = 0;

void setup() {
  // put your setup code here, to run once: 
  lcd.begin(16, 2);
  lcd.clear();
  lcd.createChar(0, filled);
}

void render() {

  lcd.setCursor(0, 0);
  lcd.print(progress);
  int i = 0;
  for (i=0; i<(16*progress)/100; i++) {
    lcd.setCursor(i, 1);
    lcd.write(byte(0));
  }

}

void loop() {
  render();
  if (complete == true) {
    lcd.setCursor(8, 0);
    lcd.print("Termine!");
    delay(5000);
    lcd.clear();
    complete = false;
    progress = 0;
  } else {
    progress++;
    if (progress >= 100) {
      complete = true;
    }
    delay(200);
  }
}
