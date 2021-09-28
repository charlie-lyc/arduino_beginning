//const int var = 7;
int var = 7;

//# define pi 3.14
const float pi = 3.14;
int radius = 5;

void setup() {
  Serial.begin(9600);
  
  var = var + 1; // When use 'const' - Error : assignment of read-only variable 'var'
  Serial.println(var);

  float areaOfCircle = pi * radius * radius;
  float lengthOfCircle = pi * radius * 2;
  Serial.println(areaOfCircle);
  Serial.println(lengthOfCircle);
  
}

void loop() {
  
}
