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
  analogWrite(pin,light);
}