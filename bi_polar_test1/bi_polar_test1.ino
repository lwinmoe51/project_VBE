#define ENABLE 8
#define DIRECTION 9
#define STEP 10

#define FORWARD HIGH
#define REVERSE LOW

#define SPEED 12000//Change this value to alter the clock speed

void setup() {
  // put your setup code here, to run once:
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRECTION,OUTPUT);
  pinMode(STEP,OUTPUT);

  digitalWrite(ENABLE,LOW);  //Pull the enable pin low to enable the driver
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(DIRECTION,FORWARD); 

  for(int x; x<200; x++){
    digitalWrite(STEP,HIGH);
    delayMicroseconds(SPEED);
    digitalWrite(STEP,LOW);
    delayMicroseconds(SPEED);
  }

   delay(1000); 

   digitalWrite(DIRECTION,REVERSE); 

  for(int x; x<200; x++){
    digitalWrite(STEP,HIGH);
    delayMicroseconds(SPEED);
    digitalWrite(STEP,LOW);
    delayMicroseconds(SPEED);
  }

   delay(1000); 

  
}
