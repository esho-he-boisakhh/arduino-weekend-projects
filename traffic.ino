int redPin = 13;
int yellowPin = 12;
int greenPin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // 1. Green light (Go) - 4 seconds
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  delay(4000);

  // 2. Yellow light (Slow down) - 1.5 seconds
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(1500);

  // 3. Red light (Stop) - 4 seconds
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(4000);
}
