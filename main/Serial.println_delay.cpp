#include "Arduino.h"//不加这句 idf build出错：
// Bootloader binary size 0x4d90 bytes. 0x3270 bytes (39%) free.
// ninja: build stopped: subcommand failed.
// ninja failed with exit code 1

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);//9600 在 串口监视器 115200中无输出，还以为编译坏了//启动信息默认 115200
  Serial.println("上传成功 ");
}

unsigned long qgb_time;

void loop() {
  Serial.print("Time: ");
  qgb_time = millis();

  Serial.println(qgb_time); //prints time since program started
  delay(500);//500 	ms          // wait a second so as not to send massive amounts of data
}
