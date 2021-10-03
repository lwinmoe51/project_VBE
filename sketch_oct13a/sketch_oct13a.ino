#define ENABLE 10
#define DIRECTION 9
#define STEP 8

#define FORWARD HIGH
#define REVERSE LOW

#define SPEED 500

void setup() {
  // put your setup code here, to run once:
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRECTION,OUTPUT);
  pinMode(STEP,OUTPUT);

  digitalWrite(ENABLE,LOW);
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
}
