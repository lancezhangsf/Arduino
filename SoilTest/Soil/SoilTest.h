
#ifndef SOIL_H
#define SOIL_H

#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif


#define SOIL_LIB_VERSION "0.1.01"

class SOIL{

  public:
  	int  read(uint8_t pin);
  
  
  private:
  
  	double humidity;


};




#endif
