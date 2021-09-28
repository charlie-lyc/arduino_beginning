int pin1 = 6;
int pin2 = 7;
int pin3 = 8;

void setup() {
  Serial.begin(9600);

  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);

}

void loop() {
  blinkLED(pin1, 1000);
  blinkLED(pin2, 500);
  blinkLED(pin3, 100);

}

void blinkLED(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
  
}
