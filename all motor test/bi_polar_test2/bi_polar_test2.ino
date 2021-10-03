#define ENABLE_turning 7
#define DIRECTION_turning 8
#define STEP_turning 11

#define FORWARD HIGH
#define REVERSE LOW

#define SPEED_turning 12000
/*********************************************************/

//m1 pin define
#define ENABLE_m1 26
#define DIRECTION_m1 24
#define STEP_m1 22

//m2 pin define 
#define ENABLE_m2 32
#define DIRECTION_m2 30
#define STEP_m2 28

//m1 and m2 direction define
 #define DOWN1 HIGH //m1
 #define UP1 LOW //m1

 #define DOWN2 HIGH //m2
 #define UP2 LOW //m2

#define SPEED 4000
/**************************************************/

#include<Stepper.h>
#define STEPS 2038  //the number of steps in revolution of your motor (28BYJ-48)
Stepper shutter(STEPS,3,5,4,6);
/************************************************/

void setup() {
  pinMode(ENABLE_turning,OUTPUT);
  pinMode(DIRECTION_turning,OUTPUT);
  pinMode(STEP_turning,OUTPUT);

  digitalWrite(ENABLE_turning,LOW); 
  /*************************************************/
  // m1 pin mode
  pinMode(ENABLE_m1,OUTPUT);
  pinMode(DIRECTION_m1,OUTPUT);
  pinMode(STEP_m1,OUTPUT);

  //m2 pin mode
  pinMode(ENABLE_m2,OUTPUT);
  pinMode(DIRECTION_m2,OUTPUT);
  pinMode(STEP_m2,OUTPUT);

  digitalWrite(ENABLE_m1,LOW); //enable driver m1
  digitalWrite(ENABLE_m2,LOW); //enable driver m2
}

void loop() {
  digitalWrite(DIRECTION_turning,FORWARD); 

  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /*******************************************************/

   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
  /******************************************************************/

  digitalWrite(DIRECTION_turning,FORWARD); 

  for(int x; x<50; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /****************************************************************/

   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
/*********************************************************************/

   digitalWrite(DIRECTION_turning,REVERSE); 

  for(int x; x<75; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /*************************************************/

    digitalWrite(DIRECTION_turning,REVERSE); 

  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /***********************************************/

   
   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
  /*******************************************************/

  digitalWrite(DIRECTION_turning,REVERSE); 

  for(int x; x<50; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /*****************************************************/

   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
  /*********************************************************/

   digitalWrite(DIRECTION_turning,FORWARD); 

  for(int x; x<75; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /****************************************************/
  /***********************************************************/
  //up process
  digitalWrite(DIRECTION_m1,UP1);
  digitalWrite(DIRECTION_m2,UP2);

  for(int x; x<200*22; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED);
  }

  delay(1000);
/*************************************************/
  
  digitalWrite(DIRECTION_turning,FORWARD); 

  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /*******************************************************/

   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2);//shutter backward
  shutter.step(230);
  delay(1000);
  /******************************************************************/

  digitalWrite(DIRECTION_turning,FORWARD); 

  for(int x; x<50; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /****************************************************************/

   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
/*********************************************************************/

   digitalWrite(DIRECTION_turning,REVERSE); 

  for(int x; x<75; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /*************************************************/

    digitalWrite(DIRECTION_turning,REVERSE); 

  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /***********************************************/

   
   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
  /*******************************************************/

  digitalWrite(DIRECTION_turning,REVERSE); 

  for(int x; x<50; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /*****************************************************/

   shutter.setSpeed(10);
  shutter.step(-2038*2);//shutter forward
  shutter.step(-230);
  delay(1000);

  shutter.setSpeed(10);
  shutter.step(2038*2); //shutter backward
  shutter.step(230);
  delay(1000);
  /*********************************************************/

   digitalWrite(DIRECTION_turning,FORWARD); 

  for(int x; x<75; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turning);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turning);
  }

   delay(1000); 
   /****************************************************/

  //down process
  digitalWrite(DIRECTION_m1,DOWN1);
  digitalWrite(DIRECTION_m2,DOWN2);

  for(int x; x<200*22; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED);
  }

   delay(1000);  //1sec delay in down

   
}
