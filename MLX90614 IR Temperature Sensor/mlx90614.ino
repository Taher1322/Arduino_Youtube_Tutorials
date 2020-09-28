/* MLX90614 IR(Non Contact) Temperature Sensor with Arduino
   Author: Electrofun
   For more information visit us: www.electrofun.co.in
   Video explanation at: https://www.youtube.com/watch?v=xQ_TUbdaM_c&ab_channel=Electrofun
   Download Sensor Library: https://github.com/adafruit/Adafruit-MLX90614-Library

*/

//Including the necessary libraries
#include <Wire.h>
#include <Adafruit_MLX90614.h>

//Defining the object for mlx
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(9600);         //Initializing the Serial Port to Baud rate 9600

  Serial.println("Adafruit MLX90614 test");

  mlx.begin();               //Initializing the MLX90614 sensor
}

void loop() {

  //Reading the data from the sensor and printing it on Serial terminal
  
  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempC());
  Serial.print("*C\tObject = "); Serial.print(mlx.readObjectTempC()); Serial.println("*C");
  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempF());
  Serial.print("*F\tObject = "); Serial.print(mlx.readObjectTempF()); Serial.println("*F");

  Serial.println();
  delay(500);
}
