byte P1 = 3;
byte P2 = 4;
byte P3 = 5;
byte P4 = 6;
byte P5 = 7;
byte P6 = 8;
byte P7 = 9;
byte P8 = 10;

const int segment[] = {P1, P2, P3, P4, P5, P6, P7, P8};

const int no[] = {0b011000000, 0b110110100, 0b111100100, 0b011001100, 0b101101100, 0b101111100, 0b111000000, 0b111111100, 0b111101100, 0b111111000};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(segment[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
  digitalWrite(segment[i], bitRead(no[0], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[1], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[2], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[3], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[4], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[5], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
  digitalWrite(segment[i], bitRead(no[6], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[7], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[8], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[9], 8 - i) == 1 ? HIGH : LOW);
  }
  delay(1000);
  for (int i = 0; i < 8; i++) {
    digitalWrite(segment[i], bitRead(no[10], 8 - i) == 1 ? HIGH : LOW);
  }
}