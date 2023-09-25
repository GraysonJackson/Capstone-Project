const int fsrPin = A0; // Analog pin connected to FSR
const int threshold = 600; // Adjust this threshold based on your FSR and setup

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  int fsrValue = analogRead(fsrPin); // Read FSR value from analog pin

    Serial.println("FSR0:");
    Serial.print(fsrValue);
    Serial.println();
    delay(100);
  delay(1000);
  digitalWrite(13,LOW);
  fsrValue = analogRead(fsrPin); // Read FSR value from analog pin

    Serial.println("FSR1:"); 
    Serial.print(fsrValue);
    Serial.println();
    delay(100);
  delay(1000);
}
