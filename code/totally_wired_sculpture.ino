// define led according to pin diagram
int in1 = D10;
int in2 = D9;

void setup() {
  // initialize digital pin led as an output
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  digitalWrite(in2, HIGH);
}

void loop() {
  digitalWrite(in1, HIGH);   // turn the LED on 
  delay(2000);               // wait for a second
  digitalWrite(in1, LOW);    // turn the LED off
  delay(1000);               // wait for a second
}
