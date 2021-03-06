/* test écran LCD */

#include <LiquidCrystal.h> /*Include the library code*/

/**********************************************************/

char array1[]="Salut !             ";  //the string to print on the LCD
char array2[]="Mon nom est Lou !                 ";  //the string to print on the LCD
int tim = 500;  //the value of delay time

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12); //Les numéros de pin a initialiser

/**********************************************************/

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  
    lcd.setCursor(15,0);  // set the cursor to column 15, line 0
    
    for ( int positionCounter1 = 0; positionCounter1 < 22; positionCounter1++)
    {
      lcd.scrollDisplayLeft();  //Scrolls the contents of the display one space to the left.
      lcd.print(array1[positionCounter1]);  // Print a message to the LCD.
      delay(tim);  //wait for 250 ms
    }
    
    lcd.clear();  //Clears the LCD screen and positions the cursor in the upper-left corner.
    
    lcd.setCursor(15,1);  // set the cursor to column 15, line 1
    
    for (int positionCounter2 = 0; positionCounter2 < 34; positionCounter2++)
    {
      lcd.scrollDisplayLeft();  //Scrolls the contents of the display one space to the left.
      lcd.print(array2[positionCounter2]);  // Print a message to the LCD.
      delay(tim);  //wait for 250 ms
    }
    
    lcd.clear();  //Clears the LCD screen and positions the cursor in the upper-left corner.
  }
