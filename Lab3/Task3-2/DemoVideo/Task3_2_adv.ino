const int LED_PIN = 5;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Ready. Click ON or OFF.");
}

void loop() {
  if (Serial.available() > 0) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "ON") {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("Arduino Uno LED Status:ON");
    }
    else if (cmd == "OFF") {
      digitalWrite(LED_PIN, LOW);
      Serial.println("Arduino Uno LED Status:OFF");
    }
    else {
      Serial.println("Unknown command");
    }
  }
}