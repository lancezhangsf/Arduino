
#include "SoilTest.h"


int  SOIL::read(uint8_t pin){

  pinMode(pin, INPUT); 
  
  humidity = analogRead(pin);

  humidity = map(humidity, 0, 1023, 0, 100);
  Serial.print("humidity:");
  Serial.println(humidity);

  delayMicroseconds(5);
  return 0;  
}
