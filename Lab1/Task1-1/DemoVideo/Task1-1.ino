const int led_pin = 10;
const int read_pin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);
  pinMode(read_pin, INPUT);
  analogWrite (led_pin, 255);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println(analogRead(read_pin));
}
