void setup() {
  // put your setup code here, to run once:
  DDRD = 0b11111111;
}

void loop() {
  PORTD = 0b01100000;
  delay(50);
  PORTD = 0b11011010;
  delay(50);
  PORTD = 0b11110010;
  delay(50);
  PORTD = 0b01100110;
  delay(50);
  PORTD = 0b10110110;
  delay(50);
  PORTD = 0b10111110;
  delay(50);
  PORTD = 0b11100000;
  delay(50);
  PORTD = 0b11111110;
  delay(50);
  PORTD = 0b11110110;
  delay(50);
  
}
