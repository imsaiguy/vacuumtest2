// Vacuum Flourescent Display
// Imsai Guy 2019


#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
int wait = 4000;

LiquidCrystal_PCF8574 lcd(0x27);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
    lcd.begin(40, 2); // initialize the lcd
    lcd.home();
    lcd.clear();
} 

void loop(){   
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("IMSAI Guy 2019        Vacuum Fluorescent"));
    lcd.setCursor(0, 1);
    lcd.print(F("18V DC-DC Converter        I2C Interface"));
    delay(wait);
    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(F("01234567890 ABCDEFGHIJKLMNOPQRTSUVWXYZ"));
    lcd.setCursor(0, 1);
    lcd.print(F("01234567890 abcdefghijklmnopqrstuvwxyz"));
    delay(wait);

      lcd.clear();
      lcd.print("extra: ");
      lcd.print(char(-127)); //delta
      lcd.print(char(-126)); //theta
      lcd.print(char(-122)); //sigma
      lcd.print(char(-121)); //phi
      lcd.print(char(-120)); //syi
      lcd.print(char(-119)); //ohm
      lcd.print(char(-112)); //mu
      lcd.print(char(-67));  //naught
      delay(wait);
    
    lcd.clear();
    for(char c=33;c<127;c++){
      lcd.print(c);
      delay(50);
      }
      delay(1000);
    for(char c=-128;c<0;c++){
      lcd.print(c);
      delay(50);
      }
    delay(wait);
      
      
} 
