#include<Stepper.h>
#define STEPS 2038  //the number of steps in revolution of your motor (28BYJ-48)
Stepper turning(STEPS,8,10,9,11);

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  turning.setSpeed(10);
  turning.step(-2038); 
  delay(1000);

  turning.setSpeed(10);
  turning.step(2038); 
  delay(1000);

}
