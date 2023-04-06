const int LED_R = 9;
const int LED_G = 10;
const int LED_B = 11;

const int CTRL_P = A2;

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  
  int value = analogRead(CTRL_P);

  int red = 0;
  int green = 0;
  int blue = 0;

  if (value < 255/3) {

    red = value*3;
    green = 0;
    blue = 255;

  } else if (value < (255/3)*2) {

    red = 255;
    green = (value*3)-(255/3);
    blue = 255;

  } else {

    red = 255;
    green = 255;
    blue = value - value/3;

  }

  analogWrite(LED_R, red);
  analogWrite(LED_G, green);
  analogWrite(LED_B, blue);

  delay(1);

}
