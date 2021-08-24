#include<Servo.h>
Servo motor;
String id = "sreemukhi";
int a = 180;
void setup() {
  Serial.begin(9600);
  Serial.begin(9600);
  motor.attach(9);
}
char ch;
String localPass = "";
void loop() {

  if (Serial.available()) {
    ch = Serial.read();
    if (ch == '\n' || ch == '\r') 
    {
      if (localPass == id) {
        Serial.println("Passowrd correct");
        motor.write(a);
      } else {
        Serial.println("Password incorrect");
      }
      localPass = "";
    } else {
      localPass += ch;
    }
  }
  }
