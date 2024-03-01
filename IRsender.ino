#include <IRremote.hpp>

int SEND_LED_PIN=9;
void setup() {

  IrSender.begin(SEND_LED_PIN);

}

void loop() {
//5秒間隔で10回信号を送信する
  IrSender.sendPanasonic(0xB,0x3D,10);
  delay(5000);
}
