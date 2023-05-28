
int green = 10;
int yellow = 9;
int red = 8;
int Revgreen = 7;
int Revyellow = 6;
int Revred = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

  //reverse road code 
  pinMode(Revgreen,OUTPUT);
  pinMode(Revyellow,OUTPUT);
  pinMode(Revred,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  change_light();
  delay(5000);
}

void change_light(){
 
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  
  digitalWrite(Revyellow,LOW);
  digitalWrite(Revred,LOW);
  digitalWrite(Revgreen,HIGH);
  delay(5000);
  
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(Revyellow,HIGH);
  digitalWrite(Revred,LOW);
  digitalWrite(Revgreen,LOW);
  delay(5000);
  
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(Revyellow,LOW);
  digitalWrite(Revred,HIGH);
  digitalWrite(Revgreen,LOW);
  delay(5000);
}
