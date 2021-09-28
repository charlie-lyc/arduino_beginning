int var = 7; // Global Scope

void setup() {
//  int var = 7; // Local Scope

  Serial.begin(9600);

  Serial.println("Print in Setup");
  Serial.println(var);

}

void loop() {
  Serial.println("Print in Loop");
  Serial.println(var); // When 'var' is decalred in Local Scope : Error Message - " 'var' was not declared in this scope "

  delay(1000);

}
