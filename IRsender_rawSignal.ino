#include <IRremote.h>

const int irPin = 9  // 赤外線LEDを接続するピン番号

IRsend irsend;

void setup() {
  Serial.begin(9600);
  irsend.begin();
}

void loop() {
  unsigned int rawSignal[] = {
  
  };

  // キャリア周波数を38kHzに設定
  int frequency = 38;  // kHz単位

  // 生の赤外線信号を送信
  irsend.sendRaw(rawSignal, sizeof(rawSignal) / sizeof(rawSignal[0]), frequency);

  delay(5000);  // 5秒ごとに送信
}
