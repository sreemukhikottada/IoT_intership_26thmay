int trig =9;
int echo =10;
int buzzer =11;
void setup() {
pinMode(trig,INPUT);
pinMode(echo,OUTPUT);
Serial.begin(9600);
pinMode(buzzer,OUTPUT);
}

void loop() {
digitalWrite(trig,LOW);
delayMicroseconds(4);
digitalWrite(trig,HIGH);
delayMicroseconds(14);
digitalWrite(trig,LOW);
int v;
int freq = pulseIn(echo,HIGH);
float dis = (0.0001)*343*(v/2);
Serial.print("distance :");
Serial.println(dis);
if(dis< 5.0){
  tone(buzzer,1200);
  delay(500);
}
else if(dis<12.0){
  
  tone(buzzer,1000);
  delay(300);
}
else
{
  noTone(buzzer);
delay(300);
  }

}
