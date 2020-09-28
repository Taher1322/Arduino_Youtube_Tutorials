/* Interrupts with Arduino
   Author: Electrofun
   For more information visit us: www.electrofun.co.in
   Prerequisites video: https://www.youtube.com/watch?v=hyLIV0ZkUl8&pp=QAA%3D&ab_channel=Electrofun
   Video explanation at: https://www.youtube.com/watch?v=pVCO0ywsh5Y&ab_channel=Electrofun

*/

int ledpin = 13;      //Onboard led 
int inpin = 10;       //Push button pin 
int val = 0;          //read the pin status 

void setup() {
  pinMode(ledpin, OUTPUT);      //led as output 
  pinMode(inpin, INPUT);        //Push button as input 
  // put your setup code here, to run once:

}

void loop() {
 val = digitalRead(inpin);      //Read the input value 
 if (val == HIGH)               //check the value of the pin
 digitalWrite(ledpin, HIGH);    //Led on 
 else 
 digitalWrite(ledpin, LOW);     //led off 
 

}
