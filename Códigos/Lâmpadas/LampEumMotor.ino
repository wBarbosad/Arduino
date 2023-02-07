int LedV = 12;
int Motor = 3;
int Bottao = 2;
int Vb;  //Variavel para ler o sinal do botao;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedV, OUTPUT);
  pinMode(Motor, OUTPUT);
  pinMode(Bottao, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Vb = digitalRead(Bottao);
  Serial.print(Vb);

  if(Vb == HIGH){
    digitalWrite(LedV, HIGH);
    delay(1000);
    digitalWrite(LedV, LOW);
    delay(500);
  } else
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
    

  

 
}
