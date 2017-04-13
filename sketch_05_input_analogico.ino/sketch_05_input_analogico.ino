char byte_input = 0;  

void setup() {
        Serial.begin(9600);     
}

void loop() {
  if (Serial.available() > 0) {
      byte_input = Serial.read();
      if (byte_input == 'a') {
          Serial.println("Hai premuto il tasto A");
        } else if (byte_input == '1') {
          Serial.println("Hai premuto il tasto 1");
        } else {
          Serial.print("Ho ricevuto: ");
          Serial.println(byte_input, DEC);
      }
  }
}

