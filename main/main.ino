 #include<Stepper.h>
#define STEPS 2038  //the number of steps in revolution of your motor (28BYJ-48)
Stepper shutter(STEPS, 4,6,5,7);

/*const int t_buttonPin = 13; 
const int s_buttonPin = 53; 
int t_buttonState = 0; 
int s_buttonState = 0;*/
void setup() {
//  put your setup code here, to run once:
  /*pinMode(t_buttonPin, INPUT);
  pinMode(s_buttonPin, INPUT);
  
  t_buttonState=digitalRead(t_buttonPin);
  s_buttonState=digitalRead(s_buttonPin);
  
  while(t_buttonState==0 && s_buttonState==0){
    shutter.setSpeed(10);
    shutter.step(1);
    s_buttonState=digitalRead(s_buttonPin);

    turning.setSpeed(10);
    turning.step(1);
    t_buttonState=digitalRead(t_buttonPin);
  }

  if(t_buttonState==1 && s_buttonState==1){
   loop();
  } */
 
}
void loop() {
  

  shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  delay(1000);

 

  
}
