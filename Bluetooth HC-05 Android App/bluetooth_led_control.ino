/* Bluetooth Interfacing with Arduino
   Author: Electrofun
   Prerequisites video: https://www.youtube.com/watch?v=3Iha7kBGjHQ&ab_channel=Electrofun
   Video explanation at: https://www.youtube.com/watch?v=sY9rmyxqofM&ab_channel=Electrofun
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
