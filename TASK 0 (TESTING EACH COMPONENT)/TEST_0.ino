// Welcome to IOT WORKSHOP - EECS CLUB


void setup() {
  pinMode(2, OUTPUT);   // built-in LED pin on most ESP32 boards
}

void loop() {
  digitalWrite(2, HIGH);
  delay(100);          // 1 second ON
  digitalWrite(2, LOW);
  delay(100);          // 1 second OFF
}