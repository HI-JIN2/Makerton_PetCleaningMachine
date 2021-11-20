#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define BUTTON 7

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(7, INPUT);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH) {
    lcd.setCursor(0, 0);
    lcd.print("Project Start!!");
    lcd.setCursor(0, 1);
    lcd.print("HI JIN!");
    delay(3000);
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Inserting");

    lcd.setCursor(0, 1);
    lcd.print("Water!!");
    delay(3000);

    lcd.clear();
  }
}
