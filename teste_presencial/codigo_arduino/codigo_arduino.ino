#include <LiquidCrystal.h>


int led = 13;
int buzzer = 12;

LiquidCrystal lcd(2,3,4,5,6,7,8);

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
      if (command.equals("Arma Encontrada")) {
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
