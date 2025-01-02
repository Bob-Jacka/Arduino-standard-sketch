typedef const unsigned int pin;

pin ledPin = 13;
pin voltPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
