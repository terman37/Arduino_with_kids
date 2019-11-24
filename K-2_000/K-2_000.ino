void setup() {
  // PAS BESOIN DE TOUCHER
  for (int i=2;i<13;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // CHANGER PROGRAMME
  // digitalWrite(2,HIGH); // ALLUMER LA LAMPE 2
  // digitalWrite(5,LOW); // ETEINDRE LA LAMPE 2
  // delay(200);          // ATTENDRE 200ms = 0,2 secondes

int tempspause = 100;

digitalWrite(2,HIGH);
delay(tempspause);
digitalWrite(3,HIGH);
delay(tempspause);
digitalWrite(4,HIGH);
delay(tempspause);
digitalWrite(5,HIGH);
delay(tempspause);
digitalWrite(6,HIGH);
delay(tempspause);
digitalWrite(7,HIGH);
delay(tempspause);
digitalWrite(8,HIGH);
delay(tempspause);
digitalWrite(9,HIGH);
delay(tempspause);
digitalWrite(10,HIGH);
delay(tempspause);
digitalWrite(11,HIGH);
delay(tempspause);
digitalWrite(2,LOW);
delay(tempspause);
digitalWrite(9,LOW);
delay(tempspause);
digitalWrite(8,LOW);
delay(tempspause);


digitalWrite(7,LOW);
delay(tempspause);
digitalWrite(2,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
delay(tempspause);
digitalWrite(2,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(tempspause);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
delay(tempspause);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
delay(tempspause);
}
