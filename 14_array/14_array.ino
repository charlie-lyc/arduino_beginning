void setup() {
  Serial.begin(9600);
  Serial.println("------------");

  int myArr[3] = { 10, 20, 30 };
  
  for (int i = 0; i < 3; i ++) {
    Serial.println(myArr[i]);
  }
  
  Serial.println("------------");
  
  myArr[2] = myArr[0] * myArr[1];
  
  for (int i = 0; i < 3; i ++) {
    Serial.println(myArr[i]);
  }

  Serial.println("------------");
  
  for (int i = 0; i < 3; i ++) {
    myArr[i] = myArr[i] + 100;
  }
  
  for (int i = 0; i < 3; i ++) {
    Serial.println(myArr[i]);
  }
  
}

void loop() {

}
