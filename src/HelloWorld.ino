SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D5, OUTPUT);
}


void loop() {
  digitalWrite(D5, HIGH);
  delay(500);
  digitalWrite(D5, LOW);
  delay(500);
}