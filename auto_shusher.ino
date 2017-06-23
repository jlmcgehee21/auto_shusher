#include <Keyboard.h>

char to_press = KEY_F1;

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10000);
  Keyboard.press(to_press);
  delay(1000);
  Keyboard.release(to_press);
}
