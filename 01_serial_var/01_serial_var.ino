//int myVar;
int myVar = 1;

void setup() {
  Serial.begin(9600);
  
  Serial.println(myVar);
  myVar = myVar + 2;
  Serial.println(myVar);

}

void loop() {
  
}
