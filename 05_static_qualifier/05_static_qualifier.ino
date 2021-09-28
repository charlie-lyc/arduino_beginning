void setup() {
  Serial.begin(9600);

}

void loop() {
//  int xyz = 0;
  static int xyz = 0;

  xyz ++; // xyz = xyz + 1

  Serial.println(xyz);
  delay(1000);

}
