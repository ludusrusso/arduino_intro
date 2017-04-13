/*
  Blink

*/
int pin_input = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  
}

// the loop function runs over and over again forever
void loop() {
  int lettura = analogRead(pin_input);   // turn the LED on (HIGH is the voltage level)
  float valore = lettura * 5.0 / 1024;
  Serial.print("Valore Raw: ");
  Serial.print(lettura, DEC);
  Serial.print("    Valore in V: ");
  Serial.println(valore);
  delay(100);
}
