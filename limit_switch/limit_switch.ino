const int buttonPin = 5; 
int buttonState = 0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if(buttonState==0){
    Serial.println("OFF");
    delay(500); 
  }
  
  if(buttonState==1){
    Serial.println("ON");
    delay(500);
    
  }
}
