void setup() {
  Serial.begin(9600);

  Serial.println("------------");
  Serial.println(true && true);   // true  : 1
  Serial.println(true && false);  // false : 0
  Serial.println(false && true);  // false : 0
  Serial.println(false && false); // false : 0
  Serial.println(true || true);   // true  : 1
  Serial.println(true || false);  // true  : 1
  Serial.println(false || true);  // true  : 1
  Serial.println(false || false); // false : 0

  Serial.println("------------");
  Serial.println(!true);          // false : 0
  Serial.println(!false);         // true  : 1
  Serial.println(3 > 7 && 7 < 9); // false : 0
  Serial.println(3 > 7 || 7 < 9); // true  : 1
  
}

void loop() {
  // Logical Operator : and, or, not
  // &&, ||, !

}
