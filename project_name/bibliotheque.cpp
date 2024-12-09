#include "bibliotheque.h"
 
/*Initiale pin liee a Lightsensor comme un INPUT analog*/
void Lightsensor::init(){
  pinMode(pin, INPUT);
}

/*Renvoie la valeur de la luminosite ambiante*/
int Lightsensor::getlight(){
  return analogRead(pin);
}

/*Initiale pin liee a Soundsensor comme un INPUT analog*/
void Soundsensor::init(){
  pinMode(pin, INPUT);
}

/*Renvoie la valeur de la bruite ambiante*/
int Soundsensor::getsound(){
  return analogRead(pin);
}

/*Initiale LED pin liee a mode OUTPUT*/
void LED::init(){
  pinMode(pin, OUTPUT);
}

/*Alume LED d'apres luminosite ambiante*/
void LED::setlight(int light){
  /*Conversion de la luminosite ambiante en luminsite LED*/
  int ledbrightness = map(light,1024,0,0,255);
  analogWrite(pin, ledbrightness);
}

/*Initiale pin liee a Button comme un Input digital*/
void Button::init(){
  pinMode(pin,INPUT);
}

/*Renvoie la state du button en HIGH ou LOW*/
int Button::get_buttonState(){
  return digitalRead(pin);
}