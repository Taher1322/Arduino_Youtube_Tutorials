/* Bluetooth Interfacing with Arduino
   Author: Electrofun
   Prerequisites video: https://youtu.be/3Iha7kBGjHQ
   Prerequisites video: https://youtu.be/sY9rmyxqofM
   Video explanation at: https://youtu.be/eY0iW5zBAIs
*/


char data;   //Variable to store the data
int input1 = 7;   //Declaring the Relay Input pin
int input2 = 6;   //Declaring the Relay Input pin


void setup() {
  Serial.begin(9600);           //Initializing the Serial Port to Baud rate 9600
  pinMode(input1, OUTPUT);      //Defining the Input pin as output
  pinMode(input2, OUTPUT);      //Defining the Input pin as output
  digitalWrite(input1, HIGH);   //Keeping the relay pin as default low
  digitalWrite(input2, HIGH);   //Keeping the relay pin as default low
  // put your setup code here, to run once:

}

void loop() {
  if ( Serial.available())     //Checks the availability of Serial port
  {
    data = Serial.read();      // Read the data and stores it in variable
    Serial.print(data);       //Print the received data
  }

 
  if (data == 'a')          //Check if the received character is a
    digitalWrite(input1, HIGH);   //Make the GPIO High
  else if (data == 'A')     ////Check if the received character is A
    digitalWrite(input1, LOW);    //Make the GPIO Low

  else if (data == 'b')          //Check if the received character is b
    digitalWrite(input2, HIGH);   //Make the GPIO High
  else if (data == 'B')     ////Check if the received character is B
    digitalWrite(input2, LOW);    //Make the GPIO Low

  delay(100);

 
}
