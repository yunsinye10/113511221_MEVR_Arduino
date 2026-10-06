#include <SoftwareSerial.h>
const int LED_PIN = 5;
// SoftwareSerial(RX, TX)
SoftwareSerial BT(10, 11);

String cmd = "";
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);   // USB Serial：給電腦看除錯訊息
  BT.begin(9600);       // HC-05：先假設資料模式為 38400

  Serial.println("System ready");
}

void loop() {
  if (BT.available()) {
    cmd = BT.readStringUntil('\n');
    cmd.trim();

    Serial.print("Bluetooth received: ");
    Serial.println(cmd);

    if (cmd == "ON") {
      ledState = true;
      digitalWrite(LED_PIN, HIGH);
      BT.println("OK: LED ON");
    }
    else if (cmd == "OFF") {
      ledState = false;
      digitalWrite(LED_PIN, LOW);
      BT.println("OK: LED OFF");
    }
    else if (cmd == "STATUS") {
      if (ledState) {
        BT.println("LED=ON");
      } else {
        BT.println("LED=OFF");
      }
    }
    else {
      BT.println("ERR: UNKNOWN COMMAND");
    }
  }
}