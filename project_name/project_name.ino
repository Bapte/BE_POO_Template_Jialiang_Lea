#include "Application.h"
#include "bibliotheque.h"
#include "Wire.h"
#include "rgb_lcd.h"

Application myApplication;
rgb_lcd lcd;

const int pinbutton = D7;
const int pinsound = A0;

const int colorR = 255;
const int colorG = 255;
const int colorB = 255;

// LEDS sur BUILTIN_LED et une autre sur D0


long lastTime;


Lightsensor lightsensor(A0);
LED led(BUILTIN_LED, 0);
void setup() {
  Serial.begin(74880);
  Serial.println("BONJOUR\nJE DEMARRE");
  // put your setup code here, to run once:
  Serial.begin(115200);
  lightsensor.init();
  led.init();

  //set LCD
  lcd.begin(16,2);
  //lcd.setRGB(colorR,colorG,colorB);
  lcd.print("Light Sensor");

  lastTime = 0;
}



void loop() {
  int light = lightsensor.getlight();

//affiche valeur light tous les 2s
  if (millis() - lastTime > 2000) {
    lastTime = millis();
    Serial.printf("valeur light = %d\n", light);
    //affiche sur LCD
    lcd.clear();
    //lcd.setCursor(0,0);
    lcd.printf("valeur light = %d\n", light);
  }

  // put your main code here, to run repeatedly:


  led.setlight(light);

  // interdit delay(2000);
}
