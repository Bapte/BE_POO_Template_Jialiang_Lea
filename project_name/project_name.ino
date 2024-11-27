#include "Application.h"
#include "bibliotheque.h"

Application myApplication;

const int pinbutton = D7;
const int pinsound = A0;

// LEDS sur BUILTIN_LED et une autre sur D0


long lastTime;


Lightsensor lightsensor(A0);
LED led(BUILTIN_LED, 0);
void setup() {
  Serial.begin(74880);
  Serial.println("BONJOUR\nJE DEMARRE");
  // put your setup code here, to run once:
  lightsensor.init();
  led.init();

  lastTime = 0;
}



void loop() {
  int light = lightsensor.getlight();

  if (millis() - lastTime > 2000) {
    lastTime = millis();
    Serial.printf("valeur light = %d\n", light);
  }

  // put your main code here, to run repeatedly:

  if (light < THRESHOLD) {
    led.setlight(255);
  } else {
    led.setlight(0);
  }

  // interdit delay(2000);
}
