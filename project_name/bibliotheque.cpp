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
  int ledbrightness = map(light,1024,0,0,255);
  analogWrite(pin, ledbrightness);
  /*
  if (light > 100) {
    digitalWrite(pin,LOW);
  }
  else{
    digitalWrite(pin,HIGH);
  }

  */
}



void Button::init(){
  pinMode(pin,INPUT);
}
int Button::get_buttonState(){
  return digitalRead(pin);
}