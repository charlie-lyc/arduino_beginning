void setup() {
  Serial.begin(9600);
  Serial.println("------------");

  int x = 1;
//  int x = 2;
//  int x = 3;
//  int x = 0;

  switch (x) {
    case 1:
      Serial.println("You have chosen 1.");
      break;
    case 2:
      Serial.println("You have chosen 2.");
      break;
    case 3:
      Serial.println("You have chosen 3.");
      break;
    default:
      Serial.println("Please select 1 ~ 3 integer.");
      break;
  }

  int y = 10;
//  int y = 20;
//  int y = 30;
//  int y = 0;

  switch (y) {
    case 1 ... 10:
      Serial.println("You have chosen first.");
      break;
    case 11 ... 20:
      Serial.println("You have chosen second.");
      break;
    case 21 ... 30:
      Serial.println("You have chosen third.");
      break;
    default:
      Serial.println("Please select 1 ~ 30 integer.");
      break;
  }
}

void loop() {

}
