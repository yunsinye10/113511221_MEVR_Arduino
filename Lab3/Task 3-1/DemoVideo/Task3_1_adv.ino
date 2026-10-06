#include <TimerOne.h>
const int ledA = 3;
const int ledB = 4;
const int buttonA = 5;
const int buttonB = 6;
volatile bool ledAState = false;
volatile bool ledBState = false;
void timer_led(){
  ledAState = digitalRead(buttonA);
  if(ledAState == HIGH){
    digitalWrite(ledA, LOW); 
  }else{
    digitalWrite(ledA, HIGH); 
  }
  Serial.println(ledAState);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);

  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);

  Timer1.initialize(50000);
  Timer1.attachInterrupt(timer_led);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledBState = digitalRead(buttonB);
  if(ledBState == HIGH){
    digitalWrite(ledB, LOW); 
  }else{
    digitalWrite(ledB, HIGH); 
  }
  Serial.println(ledAState);
  delay(1000);
}
