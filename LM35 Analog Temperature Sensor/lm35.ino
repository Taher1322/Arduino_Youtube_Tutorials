/*LM35 Analog Temperature Sensor with Arduino 
 * Author: Electrofun 
 * For more information visit us: www.electrofun.co.in
 * Prerequisites: https://www.youtube.com/watch?v=k5oMLvDKJL4&ab_channel=Electrofun
 * Video explanation at: https://www.youtube.com/watch?v=eA7QHO4S1MU&ab_channel=Electrofun
 */


int sensor = A0;  //Defining Analog pin
float temp;       //Defining variable to read the temperature data 
float vout;

void setup() {
  Serial.begin(9600);         //Defining Serial with Baud Rate 960
  pinMode(sensor, INPUT);     //Defining pin as INPUT
  // put your setup code here, to run once:

}

void loop() {

  vout = analogRead(sensor);      //Reading the ADC value 
  vout = (vout * 500)/1023;       //Converting the ADC in voltage with the reference voltage of 5V 
  temp = vout;
  Serial.print(temp);             //Printing the Temperature value on serial
  Serial.print(" ");
  Serial.println("Degree Celsius");
  delay(1000);

  
  // put your main code here, to run repeatedly:

}
