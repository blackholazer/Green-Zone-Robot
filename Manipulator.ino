#include <Servo.h>

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
}

void loop() {
  int val1 = analogRead(pot1);
  int val2 = analogRead(pot2);
  int val3 = analogRead(pot3);
  int val4 = analogRead(pot4);
  delay(15);
}
