int a = 0;
int b = 1;
int c = 2;
int d = 3;
int e = 4;
int f = 5;
int g = 6;
int e1 = 8;
int e2 = 9;
int e3 = 10;
int e4 = 12;

void setup() {
pinMode(13,OUTPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(e1,INPUT);
pinMode(e2,INPUT);
pinMode(e3,INPUT);
pinMode(e4,INPUT);

}
void decode(int e1,int e2, int e3, int e4){
  if(e1 == 0 && e2 == 0 && e3 == 0 && e4 == 0){
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
  }
  if(e1 == 0 && e2 == 0 && e3 == 0 && e4 == 1){
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
   if(e1 == 0 && e2 == 0 && e3 == 1 && e4 == 0){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
  }
  if(e1 == 0 && e2 == 0 && e3 == 1 && e4 == 1){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
  }
  if(e1 == 0 && e2 == 1 && e3 == 0 && e4 == 0){
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
    if(e1 == 0 && e2 == 1 && e3 == 0 && e4 == 1){
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  if(e1 == 0 && e2 == 1 && e3 == 1 && e4 == 0){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
    if(e1 == 0 && e2 == 1 && e3 == 1 && e4 == 1){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
  }
    if(e1 == 1 && e2 == 0 && e3 == 0 && e4 == 0){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
   if(e1 == 1 && e2 == 0 && e3 == 0 && e4 == 1){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
 }
void loop() {
  decode(digitalRead(e1),digitalRead(e2),digitalRead(e3),digitalRead(e4));  
}



