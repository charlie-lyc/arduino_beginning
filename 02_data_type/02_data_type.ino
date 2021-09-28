//int var1 = 1;
//int var2 = 2;

//float var1 = 1.2;
//float var2 = 2.3;

//bool var1 = true;  // 1
//bool var2 = false; // 0

//byte var1 = 0;
//byte var2 = 255;

char var1 = 'a'; // ASCII 97
char var2 = 'b'; // ASCII 98

void setup() {
  Serial.begin(9600);

  Serial.println(var1);
  Serial.println(var2);
  Serial.println(var1 + var2);

}

void loop() {
  // Data Type
  // 1. int : integer
  // 2. float : float number
  // 3. bool : boolean
  // 4. byte : integer 0 ~ 255
  // 5. char : character (ASCII)
  // 6. ... array, string
  
}
