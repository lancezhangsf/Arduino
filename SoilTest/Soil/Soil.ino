
#include "SoilTest.h"

SOIL soil;
#define PIN_SOIL A0


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Soil Check Test");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(SOIL_LIB_VERSION);
  Serial.println();

}

void loop() {
  // put your main code here, to run repeatedly:

  soil.read(PIN_SOIL);

  delay(1000);

  
}
