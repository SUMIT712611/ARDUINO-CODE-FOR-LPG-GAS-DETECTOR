#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

#define lpg_sensor 7
#define buzzer 13

void setup()
{
  pinMode(lpg_sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  lcd.begin(16,2);
  lcd.print("LPG GAS DETECTOR");
  lcd.setCursor(0,1);
  lcd.print("SOMETHING...");
  delay(4000);
}
void loop()
{
if(digitalRead(lpg_sensor))
{
digitalWrite(buzzer,HIGH);
lcd.clear();
lcd.print("  NO LPG GAS  ");
lcd.setCursor(0,1);
lcd.print("LEAKAGE DETECTED");
delay(400);
}

else
{
  digitalWrite(buzzer, LOW);
  lcd.clear();
  lcd.print(" LPG GAS LEAKAGE ");
  lcd.setCursor(2,1);
  lcd.print("DETECTED ALERT!!");
  delay(1000);
}
}
