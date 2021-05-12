//Defining all the required libraries 
#include <SHT21.h>  

//Defining the I2C library object
SHT21 sht; 

float temp; 	// variable to store temperature
float humidity; // variable to store hemidity

void setup() {
  Wire.begin();		            //Initializing the SHT21 sensor
  Serial.begin(9600);       //Initializing the Serial Port to Baud rate 9600}

void loop() {

  temp = sht.getTemperature();  // get Temperature from SHT21
  humidity = sht.getHumidity(); // get Humidity from SHT21

  Serial.print("Temp: ");			// print readings
  Serial.print(temp);
  Serial.print("\t Humidity: ");
  Serial.println(humidity);

  delay(85);	// min delay for 14bit temp reading is 85ms
}
