

int ledPin = 11;
int ledPin2 = 12;
void setup() {
  // put your setup code here, to run once:
 
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(2, OUTPUT);

}
void loop() {
// put your main code here, to run repeatedly:
  for(int x=0; x<3; x++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  delay(100);
  for(int x=0; x<3; x++){
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  for(int x=0; x<3; x++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(2, LOW);
    delay(300);
  }
  delay(5000);
  for(int x=0; x<3; x++){
    digitalWrite(ledPin2, HIGH);
    delay(150);
    digitalWrite(ledPin2, LOW);
    delay(350);
    digitalWrite(2, 2);
    delay(300);
  }

}