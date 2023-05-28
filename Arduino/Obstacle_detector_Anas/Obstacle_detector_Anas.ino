int ObstaclePin=7;
int hasObstacle=HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(ObstaclePin,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  hasObstacle=digitalRead(ObstaclePin);
  if(hasObstacle==LOW){
    Serial.print("STOP!");
    digitalWrite(13,HIGH);
  }
  else{
    Serial.print("GO!");
    digitalWrite(13,LOW);
  }

  delay(5000);

}
