void setup() {
  Serial.begin(9600);

}

void loop() {
  // Analog to Digital Converter(ADC)
  // ADC Conversion Scale : Voltage Reverence(0V ~ 2.5V ~ 5V) => ADC Value(0 ~ 512 ~ 1023)

  // 처음에는 저항 2개로, 이후에 저항 1개 대신 Photoresistor 를 이용
  Serial.println(analogRead(A0));
  Serial.println(analogRead(A1));
  Serial.println(analogRead(A2));
  delay(1000);

}
