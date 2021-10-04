/*
 * Author: Immanuel Varghese Koshy
 * Github username: ivk1231
 * Date: 2021, oct
 * Description: this script is a Smoke Detector
 */


// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

#define BLUE 4
#define GREEN 3
#define RED 2
int sensorThres = 400;
int warning = sensorThres/2;
int pinBottone = 6;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
   pinMode(pinBottone, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
    lcd.clear();
    int analogSensor = analogRead(0);
    lcd.print(analogSensor);
    lcd.setCursor(0,0);
    Serial.println(analogSensor);
  
    if(analogSensor > warning && analogSensor < sensorThres)
    {
      analogWrite(BLUE, 255);
      analogWrite(RED, 255);
      analogWrite(GREEN, 0);
      
      lcd.setCursor(0,1);
      lcd.print("ALERT!");
    }
  
    else if(analogSensor >= sensorThres)
    {
      analogWrite(BLUE, 0);
      analogWrite(RED, 255);
      analogWrite(GREEN, 0);
      
      lcd.setCursor(0,1);
      lcd.print("WARNING!");    
    }
  
    else
    {
      analogWrite(BLUE, 0);
      analogWrite(RED, 0);
      analogWrite(GREEN, 255);
      
    }
    
    delay(1000);
}
