// Auto Coconut Collector - Arduino Sketch

const int vibrationSensorPin = 2;
const int motorPin = 9;
const int ledPin = 13;

bool coconutDetected = false;

void setup() {
  pinMode(vibrationSensorPin, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(vibrationSensorPin);

  if (sensorValue == HIGH && !coconutDetected) {
    coconutDetected = true;
    Serial.println("Coconut detected!");
    
    digitalWrite(ledPin, HIGH); // Turn on LED
    rotateMotor();              // Simulate collection mechanism
    delay(1000);                // Wait before resetting

    digitalWrite(ledPin, LOW);
    coconutDetected = false;
  }
}

void rotateMotor() {
  digitalWrite(motorPin, HIGH);
  delay(1000); // Run motor for 1 second
  digitalWrite(motorPin, LOW);
}
