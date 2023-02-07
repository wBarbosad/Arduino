

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;

    for(i=100; i>0; i--){
      analogWrite(3, i/8);
    }
   
}
