/* LED chaser
   Author: Electrofun
   Video explanation at: https://www.youtube.com/watch?v=aIZWJo_nth4&ab_channel=Electrofun
*/

//Defining Led Pins 

int ledpin1 = 3;
int ledpin2 = 4;
int ledpin3 = 5;
int ledpin4 = 6;
int ledpin5 = 7;
int ledpin6 = 8;
int ledpin7 = 9;


void setup() {
  //Defining all Pin's as OUTPUT 
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  pinMode(ledpin5, OUTPUT);
  pinMode(ledpin6, OUTPUT);
  pinMode(ledpin7, OUTPUT);

}

void loop() {
  //Creating Functions having different patterns
  Effect_1();
  delay(500);
  Effect_2();
  delay(500);
  Effect_3();
  delay(500); 
  Effect_4();
  delay(500);
  Effect_5();
  delay(500);
}

void Effect_1()
{
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin3, HIGH);
  digitalWrite(ledpin4, HIGH);
  digitalWrite(ledpin5, HIGH);
  digitalWrite(ledpin6, HIGH);
  digitalWrite(ledpin7, HIGH);

  delay(500);

  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  digitalWrite(ledpin4, LOW);
  digitalWrite(ledpin5, LOW);
  digitalWrite(ledpin6, LOW);
  digitalWrite(ledpin7, LOW);

  delay(500);

}

void Effect_2()
{
  digitalWrite(ledpin1, HIGH);
  delay(100);
  digitalWrite(ledpin2, HIGH);
  delay(100);
  digitalWrite(ledpin3, HIGH);
  delay(100);
  digitalWrite(ledpin4, HIGH);
  delay(100);
  digitalWrite(ledpin5, HIGH);
  delay(100);
  digitalWrite(ledpin6, HIGH);
  delay(100);
  digitalWrite(ledpin7, HIGH);

  delay(500);

  digitalWrite(ledpin1, LOW);
  delay(100);
  digitalWrite(ledpin2, LOW);
  delay(100);
  digitalWrite(ledpin3, LOW);
  delay(100);
  digitalWrite(ledpin4, LOW);
  delay(100);
  digitalWrite(ledpin5, LOW);
  delay(100);
  digitalWrite(ledpin6, LOW);
  delay(100);
  digitalWrite(ledpin7, LOW);

  delay(500);

}

void Effect_3()
{
  digitalWrite(ledpin7, HIGH);
  delay(100);
  digitalWrite(ledpin6, HIGH);
  delay(100);
  digitalWrite(ledpin5, HIGH);
  delay(100);
  digitalWrite(ledpin4, HIGH);
  delay(100);
  digitalWrite(ledpin3, HIGH);
  delay(100);
  digitalWrite(ledpin2, HIGH);
  delay(100);
  digitalWrite(ledpin1, HIGH);

  delay(500);

  digitalWrite(ledpin7, LOW);
  delay(100);
  digitalWrite(ledpin6, LOW);
  delay(100);
  digitalWrite(ledpin5, LOW);
  delay(100);
  digitalWrite(ledpin4, LOW);
  delay(100);
  digitalWrite(ledpin3, LOW);
  delay(100);
  digitalWrite(ledpin2, LOW);
  delay(100);
  digitalWrite(ledpin1, LOW);

  delay(500);

}

void Effect_4()
{
  digitalWrite(ledpin4, HIGH);
  delay(100);
  digitalWrite(ledpin3, HIGH);
  digitalWrite(ledpin5, HIGH);
  delay(100);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin6, HIGH);
  delay(100);
  digitalWrite(ledpin7, HIGH);
  digitalWrite(ledpin1, HIGH);

  delay(500);
  digitalWrite(ledpin4, LOW);
  delay(100);
  digitalWrite(ledpin3, LOW);
  digitalWrite(ledpin5, LOW);
  delay(100);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin6, LOW);
  delay(100);
  digitalWrite(ledpin7, LOW);
  digitalWrite(ledpin1, LOW);
  delay(500);

}

void Effect_5()
{
  digitalWrite(ledpin7, HIGH);
  digitalWrite(ledpin1, HIGH);
  delay(100);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin6, HIGH);
  delay(100);
  digitalWrite(ledpin3, HIGH);
  digitalWrite(ledpin5, HIGH);
  delay(100);
  digitalWrite(ledpin4, HIGH);
  delay(100);

  delay(500);

  digitalWrite(ledpin7, LOW);
  digitalWrite(ledpin1, LOW);
  delay(100);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin6, LOW);
  delay(100);
  digitalWrite(ledpin3, LOW);
  digitalWrite(ledpin5, LOW);
  delay(100);
  digitalWrite(ledpin4, LOW);
  delay(100);
  delay(500);

}
