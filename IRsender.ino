#include <IRremote.hpp>

int SEND_LED_PIN=9;
void setup() {

  IrSender.begin(SEND_LED_PIN);

}

void loop() {
//5秒間隔で10回信号を送信する
  IrSender.sendKaseikyo(0x128,0x16,5,0x5AAA);
  delay(5000);
}
