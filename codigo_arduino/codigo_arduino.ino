#include <LiquidCrystal.h>

int D7_pin = 4;
int D6_pin = 5;
int D5_pin = 6;
int D4_pin =  7;
int EN_pin = 11;
int RS_pin = 12;
int led = 13;
int buzzer = 8;


LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);

void setup()
{
  lcd.begin(16, 2);
  pinMode(led, OUTPUT);  
  pinMode(buzzer, OUTPUT);  
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();
      if (command.equals("Arma encontrada")) {
        int i = 0;
        lcd.clear();
        lcd.print("Arma");
        lcd.setCursor(0, 1);
        lcd.print("Encontrada!");
        
        while (i < 10){
          digitalWrite(led , HIGH);
          tone(buzzer,500);
          delay(500);
          digitalWrite(led , LOW);
          noTone(buzzer);
          delay(500);
          i++;
        }
        lcd.clear();
     

    }
  }
 
  
 
}