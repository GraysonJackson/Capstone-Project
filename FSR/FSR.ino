const int fsrPin = A0; // Analog pin connected to FSR
const int threshold = 600; // Adjust this threshold based on your FSR and setup

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int fsrValue = analogRead(fsrPin); // Read FSR value from analog pin

    Serial.println(fsrValue); // Output "Hello world!" if pressure is detected
    delay(100);
}
