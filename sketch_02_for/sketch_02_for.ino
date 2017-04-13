/*
  Blink

*/
int led01 = 11;
int led02 = 12;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led01, OUTPUT);
  pinMode(led02, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 3; i++) {
        digitalWrite(led01, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(1000);               // wait for a second
        digitalWrite(led01, LOW);    // turn the LED off by making the voltage LOW
        delay(1000);               // wait for a second
    }

   for (int i = 0; i < 5; i++) {
        digitalWrite(led02, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(1000);               // wait for a second
        digitalWrite(led02, LOW);    // turn the LED off by making the voltage LOW
        delay(1000);               // wait for a second
    }
}
