#include <SoftwareSerial.h>

SoftwareSerial mySerial(0,1);//0-rx, 1-tx

int rele = 5; //define porta 5 como rele
int rele1 = 4; //define porta 4 como rele1
int rele2 = 3; //define porta 3 como rele2
int rele3 = 2; //define porta 2 como rele3 

void setup(){
  mySerial.begin(9600); //define a comunicção serial em 9600
  pinMode(rele, OUTPUT); //declara rele como pino de saida
  pinMode(rele1, OUTPUT); //declara rele1 como pino de saida
  pinMode(rele2, OUTPUT); //declara rele2 como pino de saida
  pinMode(rele3, OUTPUT); //declara rele3 como pino de saida
  }
void loop(){
  char caracter = mySerial.read(); //faz leitura do cactere

  if(caracter == 'A'){ //se identifica caracter 'A'
    digitalWrite(rele, HIGH); //liga rele
    }
  if(caracter == 'a'){ //se identifica caracter 'a'
    digitalWrite(rele, LOW); //desliga rele
    }
  if(caracter == 'B'){ //se identifica caracter 'B'
    digitalWrite(rele1, HIGH); //liga rele1
    }
  if(caracter == 'b'){ //se identifica caracter 'b'
    digitalWrite(rele1, LOW); //desliga rele1
    }
  if(caracter == 'C'){ //se identifica caracter 'C'
    digitalWrite(rele2, HIGH); //liga rele2
    }
  if(caracter == 'c'){ //se identifica caracter 'c'
    digitalWrite(rele2, LOW); //desliga rele2
    }
  if(caracter == 'D'){ //se identifica caracter 'D'
    digitalWrite(rele3, HIGH); //liga rele3
    }
  if(caracter == 'd'){ //se identifica caracter 'd'
    digitalWrite(rele3, LOW); //desliga rele3
    }
}
