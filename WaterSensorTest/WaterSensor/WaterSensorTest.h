
#ifndef WATERSENSOR_H
#define WATERSENSOR_H

#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif


#define WATERSENSOR_LIB_VERSION "0.1.01"



class WATERSENSOR{


  public:
  	int readhydrology(uint8_t pin);
  
  
  private:
  	double  hydrology;

};




#endif
