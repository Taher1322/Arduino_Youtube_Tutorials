/* Example testing sketch for Analog 2 Axis Joystick
  For more information visit us: www.electrofun.co.in
  Video explanation at: https://youtu.be/SIaiRW6s8K4

*/

//Defining the X & Y axis pin on Arduino
int joyX = A0;
int joyY = A1;

void setup() {
  Serial.begin(9600);                 //Initializing the Serial Port to Baud rate 9600
  // put your setup code here, to run once:

}

void loop() {

  int xVal = analogRead(joyX);        //Reading the X-axis orientation of Joystick 
  int yVal = analogRead(joyY);        //Reading the Y-axis orientation of Joystick 

  Serial.print(xVal);                 //Printing the values in single line using tab
  Serial.print("\t");
  Serial.println(yVal);
  delay(500);
  // put your main code here, to run repeatedly:

}
