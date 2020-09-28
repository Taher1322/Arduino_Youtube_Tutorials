/* Software Serial with Arduino
   Author: Electrofun
   For more information visit us: www.electrofun.co.in
   Video explanation at: https://www.youtube.com/watch?v=E-wbougYSss&ab_channel=Electrofun

*/

//Defining the Library
#include <SoftwareSerial.h>

//Creating the object 
SoftwareSerial mySerial(8,9); //RX, TX 

void setup() {
  mySerial.begin(9600);       //Initialing the Software Serial at the Baud Rate of 9600
  // put your setup code here, to run once:

}

void loop() {
  mySerial.println("Hello WORLD");      //Printing Statement
  delay(1000);
  // put your main code here, to run repeatedly:

}
