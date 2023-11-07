const int fsrPin = A0; // Analog pin connected to FSR

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  int fsrValue = analogRead(fsrPin); // Read FSR value from analog pin

    Serial.println("FSR0:");
    Serial.print(fsrValue);
    Serial.println();
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  fsrValue = analogRead(fsrPin); // Read FSR value from analog pin

    Serial.println("FSR1:"); 
    Serial.print(fsrValue);
    Serial.println();
  delay(500);
}
