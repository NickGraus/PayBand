#include <PN532.h>
#include <SPI.h>

#include <LiquidCrystal.h> // includes the LiquidCrystal Library 

#define PN532_CS 10
PN532 nfc(PN532_CS);

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
#define  NFC_DEMO_DEBUG 1

void setup() {
  nfc.begin();
  lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display }
  lcd.print("Plaats het pasje"); // Prints "Arduino" on the LCD
  lcd.setCursor(0,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("op de scanner"); // Prints "Arduino" on the LCD 
}
void loop() { 
  uint32_t id;
  // look for MiFare type cards
  id = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A);
  
  if (id != 0)
  {
    lcd.clear(); // Clears the display
    lcd.print("Loading...");
    delay(1000); // 3 seconds delay
    
    if (id ==  1231374126) {
      lcd.clear(); // Clears the display
      lcd.print("U heeft een");
      lcd.setCursor(0,1);
      lcd.print("tegoed van:");
      delay(1500); // 3 seconds delay
      lcd.clear(); // Clears the display
      lcd.print("3 bonnen");
      delay(2000);
      lcd.clear();
      lcd.print("Plaats het pasje"); // Prints "Arduino" on the LCD
      lcd.setCursor(0,1); // Sets the location at which subsequent text written to the LCD will be displayed 
      lcd.print("op de scanner"); // Prints "Arduino" on the LCD 
    }
    else{
      lcd.clear(); // Clears the display
      lcd.print("Pasje niet");
      lcd.setCursor(0,1); // Sets the location at which subsequent text written to the LCD will be displayed 
      lcd.print("herkent"); // Prints "Arduino" on the LCD 
      delay(2000);
      lcd.clear();
      lcd.print("Plaats het pasje"); // Prints "Arduino" on the LCD
      lcd.setCursor(0,1); // Sets the location at which subsequent text written to the LCD will be displayed 
      lcd.print("op de scanner"); // Prints "Arduino" on the LCD 
    }
    //lcd.setCursor(6,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  }

}
