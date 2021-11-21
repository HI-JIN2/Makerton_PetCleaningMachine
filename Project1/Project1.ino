#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define BUTTON 13 // 13번 포트 : 버튼

// 세척용 모터를 위한 포트
#define M1 5
#define M2 6
#define M3 7

// 물 주입을 위한 포트
#define W1 8
#define W2 9
#define W3 10

LiquidCrystal_I2C lcd(0x27, 16, 2); // lcd 생성

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(BUTTON, INPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(W1, OUTPUT);
  pinMode(W2, OUTPUT);
  pinMode(W3, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH) {

    // 기기의 시작
    lcd.setCursor(0, 0);
    lcd.print("Project Start!!");
    lcd.setCursor(0, 1);
    lcd.print("HI JIN!");
    delay(3000);
    lcd.clear();

    // 세척용 물을 25초간 주입
    lcd.setCursor(0, 0);
    lcd.print("Inserting");
    lcd.setCursor(0, 1);
    lcd.print("Water!!");

    digitalWrite(W1, HIGH);
    digitalWrite(W2, LOW);
    digitalWrite(W3, HIGH);
    
    delay(11000);
    lcd.clear();

    digitalWrite(W1, HIGH);
    digitalWrite(W2, HIGH);
    digitalWrite(W3, HIGH);

    // 시계 & 반시계 방향으로 회전하면서 세척
    // 총 10번의 과정을 반복함
    lcd.setCursor(0, 0);
    lcd.print("Cleaning");
    lcd.setCursor(0, 1);
    lcd.print("the Pet!!!");
    
    for (int i = 0; i < 5; ++i) {
      digitalWrite(M1, HIGH);
      digitalWrite(M2, HIGH);
      digitalWrite(M3, LOW);
      delay(1000);

      digitalWrite(M1, HIGH);
      digitalWrite(M2, HIGH);
      digitalWrite(M3, HIGH);
      delay(1000);

      digitalWrite(M1, HIGH);
      digitalWrite(M2, LOW);
      digitalWrite(M3, HIGH);
      delay(1000);

      digitalWrite(M1, HIGH);
      digitalWrite(M2, HIGH);
      digitalWrite(M3, HIGH);
      delay(1000);
    }
    
    lcd.clear();

    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
    digitalWrite(M3, HIGH);

    lcd.setCursor(0, 0);
    lcd.print("Finished!!");

    delay(5000);

    lcd.clear();
  }
}
