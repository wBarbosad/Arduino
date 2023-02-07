byte LedR = 3;
  int VlRDL = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedR, OUTPUT);
  pinMode(A1, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  VlRDL = analogRead(A1);
  if(VlRDL < 100){
    digitalWrite(LedR, HIGH);
  }
    else {
    digitalWrite(LedR, LOW);
    }
  Serial.println(VlRDL);
  delay(1000);
}
