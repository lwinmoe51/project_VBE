void p_in7(){
  //go to a little more than 2nd level from ground
  digitalWrite(DIRECTION_m1,UP1);
  digitalWrite(DIRECTION_m2,UP2);
  for(int x; x<200*34; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
 delay(500);
 /********************************************************************************************************/

 //turn from stedy to roo7
  digitalWrite(DIRECTION_turning,BACKWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /***************************************************************************************/

 //shutter put the car room7
  shutter.setSpeed(10);
  shutter.step(-2038*2); 
  shutter.step(-230);
  delay(500);
  /*************************************************************************/

  //pick down the car room7 in parking place/go to same 2nd level from a little more than 2nd level
  digitalWrite(DIRECTION_m1,DOWN1);
  digitalWrite(DIRECTION_m2,DOWN2);
  for(int x; x<200*4; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
  delay(500);
  /***************************************************************/

   //shutter back off
  shutter.setSpeed(10);
  shutter.step(2038*2); 
   shutter.step(230);
  delay(500);
  /*********************************************************************/

  //turn from room7 to steady
  digitalWrite(DIRECTION_turning,FORWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /************************************************************************************/

 //go to same 2nd level from groound
  digitalWrite(DIRECTION_m1,DOWN1);
  digitalWrite(DIRECTION_m2,DOWN2);
  for(int x; x<200*30; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
  delay(500);
  /***************************************************************/
}

void p_out7(){
  //go to same 2nd level from ground
  digitalWrite(DIRECTION_m1,UP1);
  digitalWrite(DIRECTION_m2,UP2);
  for(int x; x<200*30; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
 delay(500);
 /********************************************************************************************************/

 //turn from stedy to roo7
  digitalWrite(DIRECTION_turning,BACKWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /***************************************************************************************/

 //shutter put under the car room7
  shutter.setSpeed(10);
  shutter.step(-2038*2); 
  shutter.step(-230);
  delay(500);
  /*************************************************************************/

  //pick up the car to a little bit up than 2nd level/go to a little more than 2nd level from same 2nd level
  digitalWrite(DIRECTION_m1,UP1);
  digitalWrite(DIRECTION_m2,UP2);
  for(int x; x<200*4; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
 delay(500);
 /********************************************************************************************************/

 //shutter back off
  shutter.setSpeed(10);
  shutter.step(2038*2); 
  shutter.step(230);
  delay(500);
  /*********************************************************************/

  //turn from room7 to steady
  digitalWrite(DIRECTION_turning,FORWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /************************************************************************************/

 //go to ground from a little more than 2nd level
  digitalWrite(DIRECTION_m1,DOWN1);
  digitalWrite(DIRECTION_m2,DOWN2);
  for(int x; x<200*34; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
  delay(500);
  /***************************************************************/

}

