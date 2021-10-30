int i;

void setup() {
for(i=0;i<19;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
for(i=0;i<19;i++){
  digitalWrite(i,0);
}
delay(500);
digitalWrite(18,1);
digitalWrite(14,HIGH);
for(i=8;i<14;i++){
  digitalWrite(i,HIGH);
}
digitalWrite(6,1);
digitalWrite(5,1);
digitalWrite(4,1);
digitalWrite(3,1);
digitalWrite(0,1);
delay(500);

for(i=0;i<19;i++){
  digitalWrite(i,0);
  digitalWrite(14,1);
}
delay(500);
digitalWrite(18,1);
digitalWrite(15,HIGH);
for(i=8;i<14;i++){
  digitalWrite(i,HIGH);
}
digitalWrite(6,1);
digitalWrite(5,1);
digitalWrite(3,1);
digitalWrite(2,1);
digitalWrite(0,1);
delay(500);

for(i=0;i<19;i++){
  digitalWrite(i,0);
  digitalWrite(14,1);
  digitalWrite(15,1);
}
delay(500);
digitalWrite(18,1);
digitalWrite(16,HIGH);
for(i=8;i<14;i++){
  digitalWrite(i,HIGH);
}
digitalWrite(5,1);
digitalWrite(4,1);
delay(500);

for(i=0;i<19;i++){
  digitalWrite(i,0);
  digitalWrite(14,1);
  digitalWrite(15,1);
  digitalWrite(16,1);
}
delay(500);
digitalWrite(18,1);
digitalWrite(17,HIGH);
digitalWrite(13,1);
digitalWrite(11,1);
digitalWrite(10,1);
digitalWrite(9,1);
digitalWrite(8,1);
digitalWrite(7,1);
for(i=1;i<7;i++){
  digitalWrite(i,HIGH);
}
delay(1500);
}
