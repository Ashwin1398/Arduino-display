// include the library code
#include<LiquidCrystal.h> 

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

int i;

void setup() 
{ 
// set up the LCD's number of columns and rows: 
 lcd.begin(16,2);
 lcd.setCursor(0,0);
 // Print a message to the LCD.
 lcd.print("Count");
}

void loop()
{
  for(i=0;i<9999;i++)//to count from 0-9999
  {
  lcd.setCursor(6,0);
 lcd.print(i);
 delay(50); 
 }
}
