#include <TM1637Display.h>

const int CLK = 2; //Set the CLK pin connection to the display
const int DIO = 3; //Set the DIO pin connection to the display

int i=0;

TM1637Display display(CLK, DIO);  //set up the 4-Digit Display.

void setup()
{
  display.setBrightness(0x0a);  //set the diplay to maximum brightness
}


void loop()
{
  for (i=0; i<9999; i++){
    display.showNumberDec(i); //Display the Variable value;
    delay(50); }
}
