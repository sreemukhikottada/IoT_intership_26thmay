#include<LiquidCrystal.h>
const int rs=2,en=3,d4=4,d5=5,d6=6,d7=7;
int push_button = 8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
byte char1[8]={
  B00000,
  B10001,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000,
  B00000
   
  };
  byte char2[8]={
  B00000,
  B10001,
  B00000,
  B00000,
  B00000,
  B11111,
  B00000,
  B00000
   
  };
  byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
void setup() {
  pinMode(8,INPUT_PULLUP);
  lcd.createChar(0,char1);
  lcd.createChar(1,char2);
  lcd.createChar(2,smiley);
  lcd.begin(16,2);
  
  lcd.print("Good Morning!");
  lcd.setCursor(0,1);
  lcd.write(byte(0));
  lcd.setCursor(5,1);
  lcd.write(byte(1));
  lcd.setCursor(9,1);
  lcd.write(byte(2));
  // put your setup code here, to run once:

}
void loop(){}

  
  
