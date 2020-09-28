/* Interrupts with Arduino
   Author: Electrofun
   For more information visit us: www.electrofun.co.in
   Prerequisites video: https://www.youtube.com/watch?v=H3l8Y2ra3f8&ab_channel=Electrofun
   Video explanation at: https://www.youtube.com/watch?v=X-YffrXxM-M&ab_channel=Electrofun

*/

int pin = 2;              //Defining interrupt pin
volatile int state = LOW; //Variable shared in ISR

void setup() {
  pinMode(13, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin), funct, RISING); //interrupt on rising pulse on pin no 2 
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13, state);            //Changing the state when interrupt is generated
  // put your main code here, to run repeatedly:

}

void funct()
{
  state = !state;
}
