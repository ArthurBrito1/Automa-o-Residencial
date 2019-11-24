#include <SoftwareSerial.h>

SoftwareSerial mySerial(0,1);//0-rx, 1-tx

int rele = 2; //define porta 5 como rele
int rele1 = 3; //define porta 4 como rele1
int rele2 = 4; //define porta 3 como rele2
int rele3 = 5; //define porta 2 como rele3 

char val;

void setup(){
  pinMode(rele, OUTPUT); //declara rele como pino de saida
  pinMode(rele1, OUTPUT); //declara rele1 como pino de saida
  pinMode(rele2, OUTPUT); //declara rele2 como pino de saida
  pinMode(rele3, OUTPUT); //declara rele3 como pino de saida
  digitalWrite(rele, HIGH);
  digitalWrite(rele1, HIGH);
  digitalWrite(rele2, HIGH);
  digitalWrite(rele3, HIGH);
  mySerial.begin(9600); //define a comunicção serial em 9600
  Serial.begin(9600);
  }
void loop(){
  if(mySerial.available() > 0){
    val = mySerial.read();
    Serial.println(val);
    }
  if(val == '1'){//liga rele
    digitalWrite(rele, LOW);
    }
  else if(val== '2'){//liga rele1
    digitalWrite(rele1, LOW);
    }
  else if(val == '3'){//liga rele2
    digitalWrite(rele2, LOW);
    }
  else if(val == '4'){//liga rele3
    digitalWrite(rele3, LOW);
    }
  else if(val == '9'){ //todos os reles ligados
    digitalWrite(rele, LOW);
    digitalWrite(rele1, LOW);
    digitalWrite(rele2, LOW);
    digitalWrite(rele3, LOW);
    }
  else if(val == 'A'){//desliga rele
    digitalWrite(rele, HIGH);
    }
  else if(val == 'B'){//desliga rele1
    digitalWrite(rele1, HIGH);
    }
  else if(val == 'C'){//desliga rele2
    digitalWrite(rele2, HIGH);
    }
  else if(val == 'D'){//desliga rele3
    digitalWrite(rele3, HIGH);
    }
  else if(val == 'I'){ //todos os reles desligados
    digitalWrite(rele, HIGH);
    digitalWrite(rele1, HIGH);
    digitalWrite(rele2, HIGH);
    digitalWrite(rele3, HIGH);
    }
  }
