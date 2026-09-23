const int digital_pin = 13;
const int analog_pin = A0;
const int button_pin = 2;
const int red_pin = 5;
const int green_pin = 4;
const int blue_pin = 3; 
int green_value = 0;
void setup() {
  // put your setup code here, to run once:

  pinMode(digital_pin, INPUT);
  pinMode(analog_pin, INPUT);
  pinMode(button_pin, INPUT_PULLUP);
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int button_state = digitalRead(button_pin);
  if (button_state == LOW) {
    analogWrite(red_pin, 255);
  }
  else {
    analogWrite(red_pin, 0);
  }

   if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');

    green_value = input.toInt();

    green_value = constrain(green_value, 0, 255);
  }

  analogWrite(green_pin, green_value);

  int analog_value = analogRead(analog_pin);
  int blue_value = map(analog_value, 0, 1023, 0, 255);
  analogWrite(blue_pin, blue_value);
}
