void setup() {
  Serial.begin(9600);

  int var1 = 7;
  int var2 = 8;

  Serial.println("----------");
  Serial.println(var1 > var2);  // false : 0
  Serial.println(var1 >= var2); // false : 0
  Serial.println(var1 < var2);  // true  : 1
  Serial.println(var1 <= var2); // true  : 1
  Serial.println(var1 == var2); // false : 0
  Serial.println(var1 != var2); // true  : 1

}

void loop() {
  // Comparison Operator
  // <, >, <=, >=, ==, !=
  
}
