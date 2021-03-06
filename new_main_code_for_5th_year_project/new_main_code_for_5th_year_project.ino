                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       /*********************************************************************************V-BE-EP-GROUP_IV*********************************************************************************************/
/*****************************************************************Multi layer automatic car parking system project*****************************************************************************/
/*********************************************************************************Code by MR.ROBOT*********************************************************************************************/

//rfid
#include <SPI.h>
#include <MFRC522.h>
MFRC522 mfrc522(10, 9);//9-RST, 10-SS,MOSI-51 MISO-50 SCK-52
/*******************************/
//define for shutter motor
#include<Stepper.h>
#define STEPS 2038  //the number of steps in revolution of your motor (28BYJ-48)
Stepper shutter(STEPS,3,5,4,6);// turning motor
/*******************************************************************/
//define turning motor pin
#define ENABLE_turning 7
#define DIRECTION_turning 8
#define STEP_turning 11

//turning motor direction define 
#define FORWARD HIGH 
#define BACKWARD LOW 

#define SPEED_turn 12000
/*********************************************************************/
//define 2 picking motor
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

#define SPEED_pick 4000
/*******************************************/
//define limit switch pin
#define SWITCH_R1_pin 23
#define SWITCH_R2_pin 25
#define SWITCH_R3_pin 27
#define SWITCH_R4_pin 29
#define SWITCH_R5_pin 31
#define SWITCH_R6_pin 33
#define SWITCH_R7_pin 35
#define SWITCH_R8_pin 37

int switchState_R1=0;
int switchState_R2=0;
int switchState_R3=0;
int switchState_R4=0;
int switchState_R5=0;
int switchState_R6=0;
int switchState_R7=0;
int switchState_R8=0;

/**********************************/
#define relay_pin 12
void setup() {
  // put your setup code here, to run once:
   //rfid setup
  SPI.begin();
  mfrc522.PCD_Init();
  /*********************************************/
  //setup for turning motor
  pinMode(ENABLE_turning,OUTPUT);
  pinMode(DIRECTION_turning,OUTPUT);
  pinMode(STEP_turning,OUTPUT);

  digitalWrite(ENABLE_turning,LOW); //enable turning motor driver
  /*********************************************/
   //setup for 2 picking motor
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
  /*************************************************/
  //set up for limit switch
  pinMode(SWITCH_R1_pin,INPUT);
  pinMode(SWITCH_R2_pin,INPUT);
  pinMode(SWITCH_R3_pin,INPUT);
  pinMode(SWITCH_R4_pin,INPUT);
  pinMode(SWITCH_R5_pin,INPUT);
  pinMode(SWITCH_R6_pin,INPUT);
  pinMode(SWITCH_R7_pin,INPUT);
  pinMode(SWITCH_R8_pin,INPUT);

/*  //RELAY
  pinMode(relay_pin,OUTPUT);
  digitalWrite(relay_pin,LOW);*/
  
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //here we have to wait for the card, when it is near to the sensor
  if ( ! mfrc522.PICC_IsNewCardPresent()){
  return;
  }
  //we can read it's value
  if ( ! mfrc522.PICC_ReadCardSerial()) {
  return;
  }
 
  Serial.print("Tag:");
  String content= "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
  content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
  content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  content.toUpperCase();
  content = content.substring(1);

  //Room 1
  if(content == "26 BA 01 12"){
    switchState_R1=digitalRead(SWITCH_R1_pin);
    if(switchState_R1==0){
      //digitalWrite(relay_pin, HIGH);
      p_in1();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R1==1){
      //digitalWrite(relay_pin,HIGH);
      p_out1();
      //digitalWrite(relay_pin, LOW);
    }
  } 

  //Room 2 
  if(content=="FA D3 36 2E"){
    switchState_R2=digitalRead(SWITCH_R2_pin);
    if(switchState_R2==0){
      //digitalWrite(relay_pin, HIGH);
      p_in2();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R2==1){
      //digitalWrite(relay_pin, HIGH);
      p_out2();
      //digitalWrite(relay_pin, LOW);
    }
  }

  //Room 3 
  if(content == "0A 7C 4F 2F"){
    switchState_R3=digitalRead(SWITCH_R3_pin);
    if(switchState_R3==0){
      //digitalWrite(relay_pin, HIGH);
      p_in3();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R3==1){
      //digitalWrite(relay_pin, HIGH);
      p_out3();
      //digitalWrite(relay_pin, LOW);
    }
  } 
  
  //Room 4 
  if(content=="D9 FA DE 2B"){
    switchState_R4=digitalRead(SWITCH_R4_pin);
    if(switchState_R4==0){
      //digitalWrite(relay_pin, HIGH);
      p_in4();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R4==1){
      //digitalWrite(relay_pin, HIGH);
      p_out4();
      //digitalWrite(relay_pin, LOW);
    }
  }

  //Room 5 
  if(content == "06 FD F2 12"){
    switchState_R5=digitalRead(SWITCH_R5_pin);
    if(switchState_R5==0){
      //digitalWrite(relay_pin, HIGH);
      p_in5();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R5==1){
      //digitalWrite(relay_pin, HIGH);
      p_out5();
      //digitalWrite(relay_pin, LOW);
    }
  } 

  //Room 6
  if(content=="B4 95 E2 1E"){
    switchState_R6=digitalRead(SWITCH_R6_pin);
    if(switchState_R6==0){
      //digitalWrite(relay_pin, HIGH);
      p_in6();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R6==1){
      //digitalWrite(relay_pin, HIGH);
      p_out6();
      //digitalWrite(relay_pin, LOW);
    }
  }

  //Room 7 
  if(content == "F6 E8 F9 11"){
    switchState_R7=digitalRead(SWITCH_R7_pin);
    if(switchState_R7==0){
      //digitalWrite(relay_pin, HIGH);
      p_in7();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R7==1){
      //digitalWrite(relay_pin, HIGH);
      p_out7();
      //digitalWrite(relay_pin, LOW);
    }
  } 

  //Room 8
  if(content=="16 1B 81 12"){
    switchState_R8=digitalRead(SWITCH_R8_pin);
    if(switchState_R8==0){
      //digitalWrite(relay_pin, HIGH);
      p_in8();
      //digitalWrite(relay_pin, LOW);
    }
    if(switchState_R8==1){
      //digitalWrite(relay_pin, HIGH);
      p_out8();
      //digitalWrite(relay_pin, LOW);
    }
  }
}
