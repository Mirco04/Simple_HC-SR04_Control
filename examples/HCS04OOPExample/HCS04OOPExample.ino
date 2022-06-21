/*******************************************

 This example show how to use this library

********************************************/

#include <HCSR04.h> //Include the library

const byte trigPin = 18; //declaire a variable to store trigPin GPIO value (18 in this case).
const byte echoPin = 5; //declaire a variable to store echoPin GPIO value (5 in this case).
int delayT = 500; //delay time (500 milliseconds)


//--------------------------------//
HCSR04 mySensor; //HCSR04's object
//--------------------------------//

void setup() {
 Serial.begin(115200);
  mySensor.SetTrigPin(trigPin); //with the method "SetTrigPin()" the "trigPin" (GPIO 18 in this case), will be setupped.
  mySensor.SetEchoPin(echoPin); //with the method "SetEchoPin()" the "echoPin" (GPIO 5 in this case), will be setupped.

}

void loop() {

  mySensor.getDistanceInCentimeters(delayT); //with the method "getDistanceInCentimeters()" the distance in centimeters will be printed.

}
