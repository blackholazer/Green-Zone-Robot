#include <Servo.h>

#define trig 3
#define echo 2
#define servo 11

// создаем обьект manipulator для сервопривода
Servo manipulator;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  manipulator.attach(servo);
  manipulator.write(90);

  Serial.begin(9600);
}

// обнаруживаем мусор и подбираем его
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

// функция для определения расстояния до обьекта
long getDistance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  long duration = pulseIn(echo, HIGH);
  long distance = duration * 0.034 / 2;
  
  return distance;
}
