/*Serial Communication with Arduino 
 * Author: Electrofun 
 * For more information visit us: www.electrofun.co.in
 * Video explanation at: https://youtu.be/3Iha7kBGjHQ
 */


char data;   //Variable to store the data
int ledpin = 13;   //Declaring the LED pin


void setup() {
  Serial.begin(9600);           //Initializing the Serial Port to Baud rate 9600
  pinMode(ledpin, OUTPUT);      //Defining the Led pin as output 
  // put your setup code here, to run once:

}

void loop() {
 if ( Serial.available())     //Checks the availability of Serial port 
 {
  data = Serial.read();      // Read the data and stores it in variable
  Serial.print(data);       //Print the received data 
 }
  if (data == '1')          //Check if the received character is 1
  digitalWrite(ledpin, HIGH);   //Make the GPIO High 
  else if (data == '0')     ////Check if the received character is 0
  digitalWrite(ledpin, LOW);    //Make the GPIO Low

  delay(100);
}
