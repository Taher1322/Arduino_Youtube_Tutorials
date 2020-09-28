/*Interfacing buzzer with Arduino 
 * Author: Electrofun 
 * For more information visit us: www.electrofun.co.in
 * Video explanation at: https://www.youtube.com/watch?v=rzigVCTrzcA&ab_channel=Electrofun
 */

int relaypin = 5;

void setup() {
  pinMode(relaypin, OUTPUT);                    //Defining the pin as OUTPUT
  // put your setup code here, to run once:

}

void loop() {

  digitalWrite(relaypin, HIGH);                //Setting the pin HIGH
  delay(3000);
  digitalWrite(relaypin, LOW);                 //Setting the pin LOW
  delay(3000);
  // put your main code here, to run repeatedly:

}
