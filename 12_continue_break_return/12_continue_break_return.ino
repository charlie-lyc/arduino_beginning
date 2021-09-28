void setup() {
  Serial.begin(9600);
  Serial.println("------------");

  int multi = 0;
  
  while (multi <= 10) {    
    multi ++;

    if (multi == 3) {
      Serial.println("Continuing this loop now.");
      continue;
    } else if (multi == 7) {
//      Serial.println("Breaking this loop now.");
//      break;
      Serial.println("Terminating this function now.");
      return;
    }

    Serial.println(2 * multi); 
  }

}

void loop() {

}
