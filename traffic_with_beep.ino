// Pin definitions
const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;
const int buzzerPin = 8;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // 1. GREEN LIGHT (5 seconds, silent)
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  noTone(buzzerPin);
  delay(5000);

  // 2. YELLOW LIGHT (3 seconds, slow beep: 1 beep per second)
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  for (int i = 0; i < 3; i++) {
    tone(buzzerPin, 1000); // 1000 Hz tone
    delay(300);            // Beep ON for 0.3s
    noTone(buzzerPin);
    delay(700);            // Beep OFF for 0.7s
  }

  // 3. RED LIGHT (5 seconds, fast beep: 4 beeps per second)
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  for (int i = 0; i < 20; i++) {
    tone(buzzerPin, 1500); // Higher 1500 Hz tone for urgency
    delay(125);            // Beep ON for 0.125s
    noTone(buzzerPin);
    delay(125);            // Beep OFF for 0.125s
  }
}
