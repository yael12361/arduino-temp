#include <LiquidCrystal.h>

float temperatura ;
int lm35 =0;

LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  lcd.begin (16,2);
}

void loop (){
  temperatura = analogRead(lm35);
  temperatura = (temperatura *5/1024) / 0.01;

lcd.clear(); 
  lcd.home(); 
  lcd.print("Temperatura:");
  lcd.setCursor(0,1);
  lcd.print(temperatura);
  lcd.print("grados C");
  Serial.println(temperatura);
  delay(1000);
}
