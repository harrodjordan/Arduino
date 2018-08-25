#define buttonA 10
#define buttonB 8
#define LED 7
#define FLASH digitalWrite(LED, HIGH); delay(1000); digitalWrite(LED, LOW);


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  FLASH;

  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonA)==LOW)
  {
    digitalWrite(LED, HIGH); 
  }

  if(digitalRead(buttonB)==LOW)
  {
    digitalWrite(LED, LOW);
  }

}
