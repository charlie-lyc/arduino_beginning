void setup() {
  Serial.begin(9600);
  Serial.println("------------");

  if (false) {
    Serial.println("My if statement.");
  } else {
    Serial.println("My else statement.");
  }

  if (false) {
    Serial.println("My if statement.");
  } else if (true) {
    Serial.println("My else if statement.");
  }
  
}

void loop() {

}
