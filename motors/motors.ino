
void setup() {
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {

  digitalWrite(4, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(3000);
  digitalWrite(4, HIGH);
  digitalWrite(AA, HIGH);
  digitalWrite(AB, HIGH);
  delay(3000);

  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(3000);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(3000);
}
