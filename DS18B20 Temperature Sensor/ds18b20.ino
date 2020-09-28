/*DS18B20 One Wire Temperature Sensor with Arduino
   Author: Electrofun
   For more information visit us: www.electrofun.co.in
   Video explanation at: https://www.youtube.com/watch?v=A5jJ-pfji_M&ab_channel=Electrofun
   Download OneWire Library: https://www.arduinolibraries.info/libraries/one-wire
   Download DallasTemperature Library: https://www.arduinolibraries.info/libraries/dallas-temperature
*/

//Including the necessary libraries
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_PIN 2     //Define the Arduino Pin 

OneWire oneWire(ONE_WIRE_PIN);    //Setup of instance to communicate with one wire sensor

DallasTemperature sensors(&oneWire);  //Pass one wire reference to Dallas Temperature Library

void setup() {
  Serial.begin(9600);

  sensors.begin();
  // put your setup code here, to run once:

}

void loop() {

  sensors.requestTemperatures();    //Call and request all sensors in one wire bus

  //Printing the Temperature in Celsius and Fahrenheit

  Serial.print("Celsius temperature: ");
  Serial.print(sensors.getTempCByIndex(0));
  Serial.print("Fahrenheit temperature: ");
  Serial.print(sensors.getTempFByIndex(0));
  Serial.println();
  delay(1000);

}
