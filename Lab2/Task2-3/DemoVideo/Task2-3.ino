
const int buttonPinA = 2;
const int ledPinA = 4;

const int buttonPinB = 3;
const int ledPinB = 5;

volatile bool ledStateA = false;

bool ledStateB = false;

// 記錄 Button B 上一次的狀態
bool lastButtonStateB = HIGH;

void setup() {

  pinMode(buttonPinA, INPUT_PULLUP);
  pinMode(ledPinA, OUTPUT);

  pinMode(buttonPinB, INPUT_PULLUP);
  pinMode(ledPinB, OUTPUT);

  digitalWrite(ledPinA, LOW);
  digitalWrite(ledPinB, LOW);

  // Button A 使用外部中斷
  attachInterrupt(
    digitalPinToInterrupt(buttonPinA),
    buttonISR,
    FALLING
  );

}

void loop() {

  // ===== LED A：External Interrupt =====

  digitalWrite(ledPinA, ledStateA);


  // ===== LED B：Polling =====

  bool currentButtonStateB = digitalRead(buttonPinB);

  // 偵測 HIGH → LOW（按下瞬間）
  if (lastButtonStateB == HIGH &&
      currentButtonStateB == LOW) {

    ledStateB = !ledStateB;

    digitalWrite(ledPinB, ledStateB);

  }

  // 儲存這次狀態，供下一次比較
  lastButtonStateB = currentButtonStateB;


  // 模擬忙碌的系統
  delay(2000);

}


// ===== Button A 中斷函式 =====

void buttonISR() {

  ledStateA = !ledStateA;

  digitalWrite(ledPinA, ledStateA);

}