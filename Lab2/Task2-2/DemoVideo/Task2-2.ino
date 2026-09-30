#include <Servo.h>
Servo myservo;
const int TRIG = 10;
const int ECHO = 11;
void setup() 
{
  myservo.attach(6);
  myservo.write(0);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(50);
  digitalWrite(TRIG,LOW);
  float time = pulseIn(ECHO,HIGH);

  float distance = 0.0346 * time / 2;
  int angle = constrain(distance, 0, 180);
  myservo.write(angle);
  Serial.println(distance);
}

