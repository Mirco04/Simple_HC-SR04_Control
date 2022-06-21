#ifndef HCSR04_h
#define HCSR04_h
#include "Arduino.h"

class HCSR04{

  private:
    int _TrigPin;
    int _EchoPin;
    long duration; 
    float distanceInCentimeters;
    #define SOUND_SPEED 0.034

  public:
    void SetTrigPin(const int TrigPin);
    void SetEchoPin(const int EchoPin);
    void getDistanceInCentimeters(int delayT);

};

#endif 