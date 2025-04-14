#include <LiquidCrystal_I2C.h>       
LiquidCrystal_I2C lcd(0x27,16,2);  //for 16x2 lcd display

int buzzer = 13;
int GASA0 = A0;
int gasvalue;


void setup() {
  
 lcd.init();     // initiate the lcd                  
 lcd.init();
 lcd.backlight(); 
 Serial.begin(9600);
 pinMode(buzzer, OUTPUT); 
 lcd.setCursor(3,0);
 lcd.print("Gas detector"); 
 lcd.setCursor(1,1);
 lcd.print("      "); 
 delay(5000);     
}

void loop() {
  int analogSensor = analogRead(GASA0);
  int gasvalue=(analogSensor-50)/35;       //gas module sensitivity
  
  lcd.setCursor(0,0);
  lcd.print("GAS Level:");
  lcd.setCursor(10,0);
  lcd.print(gasvalue);
  lcd.setCursor(12,0);
  lcd.print("%");
  
  // Checks if it has reached the threshold value
  if (gasvalue >= 10)              //gas percentage alert
  {
    lcd.setCursor(0,1);
  lcd.print("DANGER");
    tone(buzzer, 1000, 10000);
  }
  else
  {
  lcd.setCursor(0,1);
  lcd.print("NORMAL");
    noTone(buzzer);
    
  }
  delay(500);
  lcd.clear();
}
