int tmp = 10;
//int tmp = 50;
//int tmp = 70;

void setup() {
  pinMode(6, OUTPUT); // Green LED
  pinMode(7, OUTPUT); // Yellow LED
  pinMode(8, OUTPUT); // Red LED

}

void loop() {
  if (10 <= tmp && tmp < 50) {
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  } else if (50 <= tmp && tmp < 70) {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  } else {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }

}
