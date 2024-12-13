# Lampe Intelligente
###Jialiang Bao, Léa Pronzola

####Ce programme permet de gérer l’intensité d’une lampe en fonction de son environnement. Si elle se trouve dans une pièce sombre, elle va s’allumer au maximum et s’éteindre si elle est dans une pièce bien éclairée. Ce mode de fonctionnement peut être activé ou désactivé en appuyant sur le bouton. La luminosité mesuré par le capteur est affichée sur l’écran.

**##Headers utilisé :**
```
#include "Application.h"
#include "bibliotheque.h"
#include "Wire.h"
#include "rgb_lcd.h"
```
**##Méthodes de ”bibliothèque.h” utilisées**

###lightsensor.init()  
####Méthode d’initialisation du capteur de luminosité, lui associe une pin en INPUT.


###lightsensor.getlight()  
####Méthode qui récupère l’intensité mesurée par le capteur.


###led.init()  
####Méthode d’initialisation de la LED, lui associe une pin en OUTPUT.


###led.setlight()  
####Méthode qui allume la LED en fonction de la luminosité captée. Elle convertit la luminosité ambiante mesurée en luminosité à imposer à la LED.


###but.init()  
####Méthode d’initialisation du bouton, lui associe une pin en INPUT.


###but.get_buttonState()  
####Méthode qui récupère l’état du bouton (haut ou bas).

