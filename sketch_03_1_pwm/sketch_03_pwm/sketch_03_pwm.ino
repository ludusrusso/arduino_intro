/*
  Blink

*/
int led = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(led, 150);   // turn the LED on (HIGH is the voltage level)
  delay(10);
}
