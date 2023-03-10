#include <LiquidCrystal.h>
#include "SR04.h"
#define TRIG_PIN 4
#define ECHO_PIN 5 

const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
float a;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Distance in cm:");
  Serial.begin(9600);//Initialization of Serial Port
   delay(1000);
}

void loop() {
  a=sr04.Distance()+2;// +2 is added to calibrate the sensor
  Serial.print(a);
   Serial.println("cm");
   lcd.setCursor(0, 1);
  // Print the distance to the object:
  lcd.print(a);
   delay(1000);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  
  
}
