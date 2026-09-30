
const int PIN_1A = 10;    // L293D Pin 2
const int PIN_2A = 11;    // L293D Pin 7

const int PIN_DIR = A0;   // Potentiometer
const int PIN_ENA = 6;    // L293D Pin 1

bool direction = 0;

void setup() {

  pinMode(PIN_1A, OUTPUT);
  pinMode(PIN_2A, OUTPUT);
  pinMode(PIN_DIR, INPUT);
  pinMode(PIN_ENA, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  // 1. Read potentiometer
  int value = analogRead(PIN_DIR);

  // 2. Determine direction
  if (value < 512) {
    direction = 0;
  } else {
    direction = 1;
  }

  // 3. Calculate speed
  int speed;

  if (direction == 0) {

    speed = map(value, 0, 511, 255, 0);

  } else {

    speed = map(value, 512, 1023, 0, 255);

  }

  // 4. Set motor direction
  if (direction == 0) {

    digitalWrite(PIN_1A, HIGH);
    digitalWrite(PIN_2A, LOW);

  } else {

    digitalWrite(PIN_1A, LOW);
    digitalWrite(PIN_2A, HIGH);

  }

  // 5. Output PWM to ENA
  analogWrite(PIN_ENA, speed);

  // 6. Display debugging information
  Serial.print("A0 = ");
  Serial.print(value);

  Serial.print(" | Direction = ");
  Serial.print(direction);

  Serial.print(" | Speed = ");
  Serial.println(speed);

  delay(20);

}