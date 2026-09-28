void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(A0);
  float voltage = reading * (5.0 / 1023.0);

  Serial.print("Time: ");
  Serial.print(millis() / 1000);
  Serial.print(" s | Battery voltage: ");
  Serial.print(voltage, 3);
  Serial.println(" V");

  delay(5000);
}