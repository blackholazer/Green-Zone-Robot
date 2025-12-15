
int L_MOTOR1 = 5
int L_MOTOR1_DIR = 7
int L_MOTOR2 = 6
int L_MOTOR2_DIR = 8

int R_MOTOR1 = 9
int R_MOTOR1_DIR = 11
int R_MOTOR2 = 10
int R_MOTOR2_DIR = 12

void setup() {
  pinMode(L_MOTOR1, OUTPUT)
  pinMode(L_MOTOR1_DIR, OUTPUT)
  pinMode(L_MOTOR2, OUTPUT)
  pinMode(L_MOTOR2_DIR, OUTPUT)

  pinMode(R_MOTOR1, OUTPUT)
  pinMode(R_MOTOR1_DIR, OUTPUT)
  pinMode(R_MOTOR2, OUTPUT)
  pinMode(R_MOTOR2_DIR, OUTPUT)

  Serial.begin(9600)
}

void loop() {

}



void move_foward(speed){
  analogWrite(L_MOTOR1, speed)
  analogWrite(L_MOTOR2, speed)
  digitalWrite(L_MOTOR1_DIR, HIGH)
  digitalWrite(L_MOTOR2_DIR, HIGH)

  analogWrite(R_MOTOR1, speed)
  analogWrite(R_MOTOR2, speed)
  digitalWrite(R_MOTOR1_DIR, HIGH)
  digitalWrite(R_MOTOR2_DIR, HIGH)

}

void move_backward(speed){
  analogWrite(L_MOTOR1, speed)
  analogWrite(L_MOTOR2, speed)
  digitalWrite(L_MOTOR1_DIR, LOW)
  digitalWrite(L_MOTOR2_DIR, LOW)

  analogWrite(R_MOTOR1, speed)
  analogWrite(R_MOTOR2, speed)
  digitalWrite(R_MOTOR1_DIR, LOW)
  digitalWrite(R_MOTOR2_DIR, LOW)

}
