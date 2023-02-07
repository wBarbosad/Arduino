#include <Servo.h>

Servo Pin3;
byte vl;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 Pin3.attach(3);
 pinMode(9, INPUT_PULLUP);
 pinMode(7, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:

 vl = digitalRead(9);
Serial.print(vl);
delay(50);
 if(vl==HIGH){
    Serial.print(vl);
      Pin3.write(360);
      digitalWrite(7, HIGH);
      delay(50);
      digitalWrite(7, LOW);
      delay(60);
 } else{
    Pin3.write(50);
 }

  
}
