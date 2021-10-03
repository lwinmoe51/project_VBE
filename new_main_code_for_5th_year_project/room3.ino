void p_in3(){
  //Go to a little bit more than 1st level from ground level with car
  digitalWrite(DIRECTION_m1,UP1);
  digitalWrite(DIRECTION_m2,UP2);
  for(int x; x<200*12; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
 delay(500);
 /******************************************************************/
  //turn from stedy to room3
  digitalWrite(DIRECTION_turning,BACKWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
/*******************************************************************/

 //shutter put the car room3
  shutter.setSpeed(10);
  shutter.step(-2038*2); 
   shutter.step(-230); 
  delay(500);
  /*************************************************************************/

  //put the car in room3/put sane 1st level from alittle more than 1st level
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

  //turn from room3 to steady
  digitalWrite(DIRECTION_turning,FORWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /*********************************************************************/
 //go to ground from same 1st level
  digitalWrite(DIRECTION_m1,DOWN1);
  digitalWrite(DIRECTION_m2,DOWN2);
  for(int x; x<200*8; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
  delay(500);
}

void p_out3(){
  //Go to same 1st floor from ground without car
  digitalWrite(DIRECTION_m1,UP1);
  digitalWrite(DIRECTION_m2,UP2);
  for(int x; x<200*8; x++){
    digitalWrite(STEP_m1,HIGH);
    digitalWrite(STEP_m2,HIGH);
    delayMicroseconds(SPEED_pick);
    digitalWrite(STEP_m1,LOW);
    digitalWrite(STEP_m2,LOW);
    delayMicroseconds(SPEED_pick);
  }
 delay(500);
 /***************************************************************************/
  //turn from stedy to room3
  digitalWrite(DIRECTION_turning,BACKWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /********************************************************/

 //shutter put the under car room3
  shutter.setSpeed(10);
  shutter.step(-2038*2); 
  shutter.step(-230); 
  delay(500);
  /*************************************************************************/

  //pick up car a little more than 1st level
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
 /******************************************************************/

 //shutter back off
  shutter.setSpeed(10);
  shutter.step(2038*2); 
  shutter.step(230); 
  delay(500);
  /*********************************************************************/

  //turn from room3 to steady
  digitalWrite(DIRECTION_turning,FORWARD);
  for(int x; x<25; x++){
    digitalWrite(STEP_turning,HIGH);
    delayMicroseconds(SPEED_turn);
    digitalWrite(STEP_turning,LOW);
    delayMicroseconds(SPEED_turn);
  }
 delay(500);
 /**************************************************************************/

  //pick down the car to ground from a little more than 1st level
  digitalWrite(DIRECTION_m1,DOWN1);
  digitalWrite(DIRECTION_m2,DOWN2);
  for(int x; x<12; x++){
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


