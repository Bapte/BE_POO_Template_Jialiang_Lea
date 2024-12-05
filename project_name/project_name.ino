#include "Application.h"
#include "bibliotheque.h"
#include "Wire.h"
#include "rgb_lcd.h"

Application myApplication;
rgb_lcd lcd;

const int pinLED = D7;
const int pinlightsensor = A0;
const int pinbutton = D3;


// LEDS sur BUILTIN_LED et une autre sur D0


long lastTime;
bool etat = false;

Lightsensor lightsensor(pinlightsensor);
LED led(pinLED,0);
Button but(pinbutton);
void setup() {
  Serial.begin(74880);
  Serial.println("BONJOUR\nJE DEMARRE");
  // put your setup code here, to run once:
  Serial.begin(115200);
  lightsensor.init();
  led.init();
  but.init();

  //set LCD
  lcd.begin(16,2);
  lcd.print("Light Sensor");

  lastTime = 0;
}



void loop() {
  int light = lightsensor.getlight();

  if (but.get_buttonState() == HIGH){
    etat = !etat;
  }
  
//affiche valeur light tous les 1s
  if (millis() - lastTime > 1000) {
    lastTime = millis();
    Serial.printf("valeur light = %d\n", light);
    Serial.printf("valeur light = %d\n", light);
    //affiche sur LCD
    lcd.clear();
    lcd.setCursor(0,0);//permier rang
    lcd.print("valeur light:");
    lcd.setCursor(0,1);//deuxieme rang
    lcd.print(light);
  }

  // put your main code here, to run repeatedly:

  if(etat){
    led.setlight(light);
  }else{
    led.setlight(1024);//LED ferme
  }
  // interdit delay(2000);
}
