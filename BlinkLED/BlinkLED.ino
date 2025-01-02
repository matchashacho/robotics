// This sketch blinks the built-in LED on the Arduino board

// Define the pin number for the LED
int ledPin = 13; // the Arduino pin that is connected to the LED

// The setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the pin as an output
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on (HIGH is the voltage level)
  delay(1000); // Wait for a second (1000 milliseconds)
  digitalWrite(ledPin, LOW); // Turn the LED off by making the voltage LOW
  delay(1000); // Wait for a second
}
