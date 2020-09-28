/*Interfacing RGB LED with Arduino 
 * Author: Electrofun 
 * For more information visit us: www.electrofun.co.in
 * Video explanation at: https://www.youtube.com/playlist?list=PLnDLZy2UodwHt3Z8bD6V8lsegmc2yGuMP
 */

//Defining variable and the GPIO pin on Arduino
int redPin= 5;
int greenPin = 6;
int bluePin = 7;

void setup() {
  //Defining the pins as OUTPUT
  pinMode(redPin, OUTPUT);              
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  setColor(255, 0, 0); // Red Color
  delay(1000);
  setColor(0, 255, 0); // Green Color
  delay(1000);
  setColor(0, 0, 255); // Blue Color
  delay(1000);
  setColor(255, 255, 255); // White Color
  delay(1000);
  setColor(170, 0, 255); // Purple Color
  delay(1000);
  setColor(127, 127, 127); // Light Blue
  delay(1000);
}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
