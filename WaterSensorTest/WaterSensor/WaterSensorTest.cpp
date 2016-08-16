
#include "WaterSensorTest.h"


int WATERSENSOR::readhydrology(uint8_t pin){


  
	hydrology = analogRead(pin);

	hydrology = map(hydrology, 0, 1023, 0, 10);


 	Serial.print("hydrology:");
	Serial.println(hydrology);

  delayMicroseconds(5);
  return 0;  

};
