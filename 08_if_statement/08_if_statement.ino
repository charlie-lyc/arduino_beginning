void setup() {
  Serial.begin(9600);
  Serial.println("------------");

//  Serial.println("This line should print irrespective of anything.");
//  if (true) {
//    Serial.println("This line should print only if the condition is true"); 
//  }
//  if (false) {
//    Serial.println("This statement will not print as the condition is false");
//  }
//  Serial.println("This line should print irrespective of anything.");

  Serial.println("This line should print irrespective of anything.");
  if (3 < 7) {
    Serial.println("This line should print only if the condition is true"); 
  }
  if (3 > 7) {
    Serial.println("This statement will not print as the condition is false");
  }
  Serial.println("This line should print irrespective of anything.");

  Serial.println("------------");
  
  if (true) {
    Serial.println("This is nested if statement.");
    if (false) {
      Serial.println("This is anotehr line which will not execute.");  
    }
  }
  
}

void loop() {

}
