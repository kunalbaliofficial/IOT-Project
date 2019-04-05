#include <LiquidCrystal.h>

#include <dht.h>
dht DHT;
#define DHT22_PIN 9

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {


analogWrite(6,20);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() 

{


  /* //lcd.noDisplay();
  delay(500);

  lcd.setCursor(0,0); 

  lcd.print("hello");*/

  int d = DHT.read22(DHT22_PIN);
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
 
  delay(1000);

}
