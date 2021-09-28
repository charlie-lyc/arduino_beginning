int PWMPin = 10;

void setup() {

}

void loop() {
  // Pulse Width Modulation(PWM) Duty Cycles(0 ~ 255) 을 이용
  // 3, 5, 6, 9, 10, 11 번 pin 을 통해서 PWM 을 이용한 analogWrite 가능
  // analogWrite(pin, value);
  // 참조 : https://www.tinkercad.com/things/jg3FY21nYOq-analog-write-with-oscilloscope

  // Oscilloscope 실습1
  // analogWrite(PWMPin, 50);
  // delay(2000);
  // analogWrite(PWMPin, 100);
  // delay(2000);
  // analogWrite(PWMPin, 150);
  // delay(2000);
  // analogWrite(PWMPin, 200);
  // delay(2000);
  // analogWrite(PWMPin, 255);
  // delay(2000);

  // Oscilloscope 실습2
  // Fade In
  for (int fadeIn = 0; fadeIn <= 255; fadeIn += 5) {
    analogWrite(PWMPin, fadeIn);
    delay(100);
  }
  // Fade Out
  for (int fadeOut = 255; fadeOut >= 0; fadeOut -= 5) {
    analogWrite(PWMPin, fadeOut);
    delay(100);
  }

}