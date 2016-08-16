
#ifndef VIBRATION_H
#define VIBRATION_H

#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif

#define VIBRATION_LIB_VERSION "0.1.01"

class VIBRATION
{
public:
	bool IsVibration(uint8_t pin);

};
#endif
//
// END OF FILE
//

