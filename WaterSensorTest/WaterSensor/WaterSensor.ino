#include "WaterSensorTest.h"

#define WATER_PIN A1

WATERSENSOR watersensor;

void setup() {
  // put your setup code here, to run once:
  pinMode(WATER_PIN, INPUT); 
  Serial.begin(115200);
  Serial.println("WaterSensor Check Test");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(WATERSENSOR_LIB_VERSION);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  watersensor.readhydrology(WATER_PIN);

  delay(1000);
  

}
