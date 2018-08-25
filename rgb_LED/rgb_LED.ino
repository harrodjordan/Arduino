#define BLUE 5
#define GREEN 4
#define RED 3

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);
  

}

void setColor(int redValue, int blueValue, int greenValue) {

  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue); 
  delay(100);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(255, 0, 0);
  setColor(0, 255, 0);
  setColor(0, 0, 255);

}
