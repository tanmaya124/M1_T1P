// Define the pin for the motion sensor
int motionSensorPin = 2;

// Define the built-in LED pin
int ledPin = 13;

void setup() {
  // Set motion sensor pin as input
  pinMode(motionSensorPin, INPUT);

  // Set LED pin as output
  pinMode(ledPin, OUTPUT);

  // Start Serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the motion sensor value
  int motionValue = digitalRead(motionSensorPin);

  // Update the LED based on the motion sensor value
  if (motionValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No motion detected.");
  }

  // Add a delay to avoid rapid updates
  delay(1000);
}
// Define the pin for the motion sensor
int motionSensorPin = 2;

// Define the built-in LED pin
int ledPin = 13;

void setup() {
  // Set motion sensor pin as input
  pinMode(motionSensorPin, INPUT);

  // Set LED pin as output
  pinMode(ledPin, OUTPUT);

  // Start Serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the motion sensor value
  int motionValue = digitalRead(motionSensorPin);

  // Update the LED based on the motion sensor value
  if (motionValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No motion detected.");
  }

  // Add a delay to avoid rapid updates
  delay(1000);
}
