
//
//    FILE: dht.cpp
// VERSION: 0.1.01
// PURPOSE: DHT Temperature & Humidity Sensor library for Arduino
//
// DATASHEET: 
//
// HISTORY:
// 0.1.01 added support for Arduino 1.0, fixed typos (31/12/2011)
// 0.1.0 by Rob Tillaart (01/04/2011)
// inspired by DHT11 library
//

#include "VibrationTest.h"

#define TIMEOUT 10000

/////////////////////////////////////////////////////
//
// PUBLIC
// return values:
//  0 : OK
// -1 : checksum error
// -2 : timeout


bool VIBRATION::IsVibration(uint8_t pin){


	bool isvibration =false;

	int vibration = digitalRead(pin);

	if (vibration){

		Serial.println("Happen Vibration ");

	}else{

		Serial.println("Not Happen Vibration ");

	}


	return true;
}

