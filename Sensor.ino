  // LED and Buzzer pins
const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;
const int buzzerPin = 8;

// HC-SR04 Ultrasonic Sensor pins
const int trigPin = 9;
const int echoPin = 7;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  //to send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //to read echo return time and convert to centimeters
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  //to control lights and buzzer based on distance
  if (distance > 30 || distance <= 0) {
    // SAFE (> 30 cm): Green light, silent
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
    noTone(buzzerPin);
    delay(100);
  } 
  else if (distance > 15 && distance <= 30) {
    // CAUTION (15–30 cm): Yellow light, slow beep
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
    tone(buzzerPin, 1000);
    delay(150);
    noTone(buzzerPin);
    delay(350);
  } 
  else {
    // STOP (< 15 cm): Red light, fast beep
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    tone(buzzerPin, 1500);
    delay(80);
    noTone(buzzerPin);
    delay(80);
  }
}
