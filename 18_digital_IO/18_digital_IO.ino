void setup() {
  pinMode(7, INPUT);
  pinMode(12, OUTPUT);
  
}

void loop() {
  // digitalRead(pin);
  // digitalWrite(pin, state);
  if (digitalRead(7) == HIGH) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }

}
