const int buttonPin_1 = 23; 
const int buttonPin_2 = 25; 
const int buttonPin_3 = 27; 
const int buttonPin_4 = 29; 
const int buttonPin_5 = 31; 
const int buttonPin_6 = 33; 
const int buttonPin_7 = 35; 
const int buttonPin_8 = 39; 

int buttonState_1 = 0; 
int buttonState_2 = 0; 
int buttonState_3 = 0; 
int buttonState_4 = 0; 
int buttonState_5 = 0; 
int buttonState_6 = 0; 
int buttonState_7 = 0; 
int buttonState_8 = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
  pinMode(buttonPin_3, INPUT);
  pinMode(buttonPin_4, INPUT);
  pinMode(buttonPin_5, INPUT);
  pinMode(buttonPin_6, INPUT);
  pinMode(buttonPin_7, INPUT);
  pinMode(buttonPin_8, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);
  buttonState_3 = digitalRead(buttonPin_3);
  buttonState_4 = digitalRead(buttonPin_4);
  buttonState_5 = digitalRead(buttonPin_5);
  buttonState_6 = digitalRead(buttonPin_6);
  buttonState_7 = digitalRead(buttonPin_7);
  buttonState_8 = digitalRead(buttonPin_8);
  
  
  if(buttonState_1==0){
    Serial.println("OFF1");
    delay(500); 
  }
  
  if(buttonState_1==1){
    Serial.println("ON1");
    delay(500);
  }
/*************************************/
  if(buttonState_2==0){
    Serial.println("OFF2");
    delay(500); 
  }
  
  if(buttonState_2==1){
    Serial.println("ON2");
    delay(500);
  }

  if(buttonState_3==0){
    Serial.println("OFF3");
    delay(500); 
  }
  
  if(buttonState_3==1){
    Serial.println("ON3");
    delay(500);
  }
}
