#include <Stepper.h>
#define STEPS 2038
Stepper myStepper(STEPS,8,10,9,11);
int stepCount = 0; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.setSpeed(10);
  myStepper.step(1);
  Serial.print("steps:");
  Serial.println(stepCount);
  stepCount++;
  if(stepCount==2038){
    stepCount=0;
  }
}
