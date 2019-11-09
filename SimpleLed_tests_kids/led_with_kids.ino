
// FOR ARDUINO NANO BOARDS: 
// SELECT BOARD: ARDUINO NANO
// SELECT PROCESSOR: (OLD BOOTLOADER)
// SELECT PORT: COM 3

// FOR ARDUINO UNO BOARDS: 
// SELECT BOARD:ARDUINO/GENUINO UNO
// SELECT PORT: COM 3

void setup() {
  // put your setup code here, to run once:
  for (int i=2;i<12;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int minid=2;
  int maxid=11;

  for (int i=minid;i<maxid+1;i++){
    
    digitalWrite(i,HIGH);
    digitalWrite(maxid+minid-i,HIGH);
    delay(150);
    digitalWrite(i,LOW);
    digitalWrite(maxid+minid-i,LOW);
    
  }
  
}
