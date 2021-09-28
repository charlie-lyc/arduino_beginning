// Library Manager
# include <LiquidCrystal.h> // Display Device
# include <SD.h>            // Read SD Card
# include <DHT.h>           // Humidity and Temprature Sensor
// # include <DHT.h     // 유효한 라이브러리가 맞는지(오렌지, 주황)
// # include <charlie.h // 아닌지(무채색)는 타입핑 도중 색깔이 다름을 보고 알 수 있음

void setup() {
  pinMode(13, OUPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);

  // No Error when Uploading
}