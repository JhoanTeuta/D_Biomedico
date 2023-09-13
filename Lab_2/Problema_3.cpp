#include <LiquidCrystal.h>
const int ledR=7;
const int ledV=8;
const int tmp=A0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Monitor de");
  lcd.setCursor(0,1);
  lcd.print("Temperatura");
  delay(2000);
  lcd.clear(); 
  Serial.begin(9600);
}

void loop() {
  int Vin = analogRead(tmp);
  float T = (Vin*(500.0/1023.0))-50.0;
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(T);
  lcd.print("C");
  
  if(T<=25.0){
    digitalWrite(ledV,HIGH);
    digitalWrite(ledR,LOW);
  }else{
    digitalWrite(ledV,LOW);
    digitalWrite(ledR,HIGH);
  }
  delay(100); 
  lcd.clear();
}
