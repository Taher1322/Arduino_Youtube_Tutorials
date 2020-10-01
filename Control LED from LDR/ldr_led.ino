/*Interfacing LDR(Light Dependent Resistor) and controlling LED with Arduino 
 * Author: Electrofun 
 * For more information visit us: www.electrofun.co.in
 * Video explanation at: https://youtu.be/2XZwRSM7ivw
 */

int ledpin = 13;          //Defining the Led pin
int ldrpin = A0;          //Defining the LDR pin

void setup() {
  Serial.begin(9600);               //Initializing the Serial Port to Baud rate 9600
  pinMode(ledpin, OUTPUT);          //Defining the Led pin as output 
  pinMode(ldrpin, INPUT);           //Defining the LDR pin as input 
  // put your setup code here, to run once:

}

void loop() {
  int ldrvalue = analogRead(ldrpin);        //Reading the analog pin value 
  Serial.println(ldrvalue);                 //Printing the value and checking the effect of intensity wrt LDR 
  delay(500);

  if (ldrvalue <100)                        //If no light, turn on the LED 
  {
  Serial.println("Light Intensity is Low");
  digitalWrite(ledpin, HIGH);  
  }
  else                                      //If light, turn off the LED
  {
    Serial.println("Light Intensity is High");
    digitalWrite(ledpin, LOW);
    
  }
  
}
