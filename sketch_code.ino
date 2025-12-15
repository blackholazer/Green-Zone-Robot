#include <Servo.h>

#define TRIG_PIN 9
#define ECHO_PIN 10
#define SERVO_PIN 11

Servo manipulator;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  manipulator.attach(SERVO_PIN);
  manipulator.write(90);
  Serial.begin(9600);

}

void loop() {
  int distance = getDistance();
   if (distance > 10 && distance < 50) {
    Serial.println(String(distance) + " см");
    manipulator.write(45);
    delay(2000);
    manipulator.write(90);
    delay(2000);
  }
  delay(500);
}

long getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;
  
  return distance;
}
