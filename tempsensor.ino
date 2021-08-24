int t;
const int fan=3, cooler=5;

void setup() {
  pinMode(fan,OUTPUT);
  pinMode(cooler,OUTPUT);

}
void temperature()
{
int v = analogRead(A0);
int x = analogRead(A1);
int dif = v - x ;
  float mv = ( dif/1024.0)*5000;
  float cel = mv/10;
 t= cel;
}

void loop() {
  temperature();
 if(t>=40)
 {for(int i=120;i<=255;i++)
 {
  analogWrite(fan,i);
  analogWrite(cooler,i);
 }
  }
  else if(t<=30)
 {for(int i=0;i<=120;i++)
 {
  analogWrite(fan,i);
  analogWrite(cooler,i);
 }
  }
   else if(30>t<40)
 {for(int i=90;i<=200;i++)
 {
  analogWrite(fan,i);
  analogWrite(cooler,i);
 }
  }
 }
 
