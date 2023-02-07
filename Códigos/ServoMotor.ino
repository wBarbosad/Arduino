#include <Servo.h> //INCLUSÃO DA BIBLIOTECA NECESSÁRIA
 
const byte pinoServo = 6; //PINO DIGITAL UTILIZADO PELO SERVO  

Servo s; //OBJETO DO TIPO SERVO
byte pos; //POSIÇÃO DO SERVO
 
void setup (){
  Serial.begin(9600);
  pinMode(A1, INPUT);
  delay(5000);
  s.attach(pinoServo); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  s.write(0); //INICIA O MOTOR NA POSIÇÃO 0º
}
void loop(){
  pos = analogRead(A1);
  Serial.print(pos);
   if(pos == HIGH){
    for(pos = 0; pos < 180; pos++){ //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
      s.write(pos); //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
      Serial.print(pos);
      delay(15); //INTERVALO DE 15 MILISSEGUNDOS
    }
   }else{
    delay(1000); //INTERVALO DE 1 SEGUNDO
    for(pos = 180; pos >= 0; pos--){ //PARA "pos" IGUAL A 180, ENQUANTO "pos" MAIOR OU IGUAL QUE 0, DECREMENTA "pos"
      s.write(pos); //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
      delay(15); //INTERVALO DE 15 MILISSEGUNDOS
    }
  }
}
