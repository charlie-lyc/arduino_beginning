void setup() {
  Serial.begin(9600);
  Serial.println("------------");

  printHello();

  Serial.println(sum(1, 2));

  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  blinkLED(LED_BUILTIN, 1000);

}

void printHello() {
  Serial.println("Hello Arduino!");
}

int sum(int a, int b) {
  return a + b;
}

void blinkLED(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}
