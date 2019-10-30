#include <LiquidCrystal.h> // includes the LiquidCrystal Library.

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LiquidCrystal object. Parameters: (rs, enable, d4, d5, d6, d7).

void setup() { 
  lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display. 
}

void loop() { 
  lcd.clear(); // Clears the display
  delay(3000); // Waits 3 seconds
  lcd.print("Ik ben woke"); // Prints "Ik ben woke" on the display 
  delay(1000); // Waits 1 second
  lcd.setCursor(6,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("Zo woke"); // Prints "Zo woke" on the display
  delay(1000); // Waits 1 second
  lcd.clear(); // Clears the display
  delay(500); // Waits 1 second
  lcd.print("Ik ben wakkerder"); // Prints "Ik ben wakkerder" on the display
  lcd.setCursor(6,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("dan ooit"); // Prints "dan ooit" on the display 
  delay(2000); // Waits 2 seconds
  lcd.clear(); // Clears the display 
  }
