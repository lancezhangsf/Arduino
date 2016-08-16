#include "VibrationTest.h"


#define VIBRATION_PIN  24

VIBRATION vibration;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Virbration Test :");
  Serial.print("LIBRARY VERSION: :");
  Serial.println(VIBRATION_LIB_VERSION);
  pinMode(VIBRATION_PIN,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  vibration.IsVibration(VIBRATION_PIN);

  delay(1000);

  
}
