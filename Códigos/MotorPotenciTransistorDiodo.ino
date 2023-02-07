int potPin = 0; // Analógico no 0, conectado ao potenciômetro 
int transistorPin = 9;  // Pino PWM 9 conectado à base do transistor
int potValue = 0;    // valor retornado do potenciômetro



void setup() {
  // put your setup code here, to run once:
  // define o pino do transistor como saída:
  Serial.begin(9600);
  pinMode(transistorPin, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:

  // lê o potenciômetro, converte para o intervalo de 0 a 255:
  potValue = analogRead(potPin) / 4;
  Serial.println(potValue);
  delay(1000);
  // utilize isso para controlar o transistor:
  analogWrite(transistorPin, potValue); 
  
}
