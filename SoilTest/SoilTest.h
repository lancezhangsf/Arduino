
#ifndef SOIL_H_
#define SOIL_H_


#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif

#define DHT_LIB_VERSION "0.1.01"

class SOIL{

public:

	int  read(uint8_t pin);


private:

	double humidity;


}




#endif