#ifndef BIBLIOTHEQUE_H_
#define BIBLIOTHEQUE_H_


#include <Arduino.h>
class Device{
protected:
  int pin;
public:
  Device(int p): pin(p){}

  virtual void init()=0;//initialiser
};

class Lightsensor:public Device{
public:
  Lightsensor(int p): Device(p){}
  void init();
  int getlight();
};

class Soundsensor:public Device{
public:
  Soundsensor(int p): Device(p){}
  void init();
  int getsound();
};

class LED:public Device{
private:
  int light;
public:
  LED(int p,int l): Device(p),light(l){}
  void init();
  void setlight(int l);
};


class Button: public Device{
  public :
  Button(int p) :Device(p){}
  void init();
  int get_buttonState();
};

#endif