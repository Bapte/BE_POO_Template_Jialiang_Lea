#include "Application.h"

Application myApplication;

const int pinbutton = D7;
const int pinsound = A0;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinbutton, INPUT);
  pinMode(pinsound, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (digitalRead(pinbutton) == 1){
    digitalWrite(LED_BUILTIN, LOW);
  }else{
    digitalWrite(LED_BUILTIN, HIGH);
  }

  if(analogRead(pinsound) > 500){
    digitalWrite(LED_BUILTIN, LOW);
  }else{
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
