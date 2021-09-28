void setup() {
  Serial.begin(9600);
  Serial.println("------------");

//  int myArr[3] = { 1, 2, 3 };
//  Serial.println(myArr);     // Error : no matching function for call to 'println(int [3])'
//  Serial.println(myArr[0]);

  char myStr1[5] = { 'H', 'e', 'l', 'l', 'o' };
  Serial.println(myStr1);
  
//  char myStr2[5] = "Hello";  // warning: initializer-string for array of chars is too long [-fpermissive]
//  Serial.println(myStr2);

  char myStr3[] = "Hello";
  Serial.println(myStr3);

//  char myStr3[] = "Arduino"; // Error : redeclaration of 'char myStr3 []'

//  myStr3[] = "Arduino";      // Error : expected primary-expression before ']' token

  Serial.println("------------");

  char str1[] = "Arduino";
  Serial.println(str1);
  
  String str2 = "Arduino";
  Serial.println(str2);

//  String str2 = "Uno";       // Error : redeclaration of 'String str2'
  str2 = "Uno";
  Serial.println(str2);

  Serial.println("------------");

//  String str3 = 'a';         // Error : conversion from 'char' to 'String' is ambiguous
//  char str3 = "a";           // warning: invalid conversion from 'const char*' to 'char' [-fpermissive]
//  Serial.println(str3)

// 결론 : 
// 1. 반드시 char 는 ' ', char [] 또는 String 은 " " 와 함께 이용
// 2. 한개의 문자도 String 으로 표현 가능하므로 실제로는 char 를 거의 이용하지 않음

  String str4 = "a";
  Serial.println(str4);

  str4 = "Hello Arduino";
  Serial.println(str4);
  Serial.println(str4[6]);
  Serial.println(str4.charAt(6));

}

void loop() {

}
