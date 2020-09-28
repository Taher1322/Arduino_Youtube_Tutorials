/*Interfacing buzzer with Arduino 
 * Author: Electrofun 
 * For more information visit us: www.electrofun.co.in
 * Video explanation at: https://www.youtube.com/watch?v=UepyY4jF0qg&ab_channel=Electrofun
 */

int buzzer=10;                //Defining variable and the GPIO pin on Arduino
void setup() 
{
  pinMode(buzzer, OUTPUT);    //Defining the pin as OUTPUT
  //put your setup code here:
}

void loop() 
{

  digitalWrite(buzzer, HIGH);   //Setting the pin HIGH
  delay(2000);
  digitalWrite(buzzer, LOW);    //Setting the pin HIGH
  delay(2000);
  //put your main code here, to run repeatedly:
}
