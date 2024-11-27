#include "Application.h"
#include "bibliotheque.h"

Application myApplication;

Lightsensor lightsensor(A0);
LED led(D1,0);
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  lightsensor.init();
  led.init();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int light = lightsensor.getlight();

  if (light < 200){
    led.setlight(255);
  }else{
    led.setlight(0);
  }

  delay(2000);
}
