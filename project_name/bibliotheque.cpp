#include "bibliotheque.h"
 

void Lightsensor::init(){
  pinMode(pin, INPUT);
}

int Lightsensor::getlight(){
  return analogRead(pin);
}

/*void Soundsensor::init(){
  pinMode(pinLightSensor, INPUT
}

int Soundsensor::getsound(){

  return 0;
}*/

void LED::init(){
  pinMode(pin, OUTPUT);
}

void LED::setlight(int light){
<<<<<<< HEAD

=======
  if (light > 100) {
    digitalWrite(pin,ON);
  }
  else{
    digitalWrite(pin,OFF);
  }
>>>>>>> 3efe31de9ca908d1453d8625d98f5ad2c05e6ff4
}