const int fsrPin = A0; // Analog pin connected to FSR

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(0,LOW);
  int fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
    for(int ib=0;ib<16;ib++){
      Serial.print("Row ");
      Serial.print((ib/10.0)*10);
        //Varies of 0 and one other high
        digitalWrite(0,HIGH);
        run(); //1
        digitalWrite(1,HIGH);
        run(); //2
        digitalWrite(1,LOW);
        digitalWrite(2,HIGH);
        run(); //3
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        run(); //4
        digitalWrite(3,LOW);
        //Varies of 8 and 9 and one other high
        digitalWrite(1,HIGH);
        digitalWrite(2,HIGH);
        run(); //5
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        run(); //6
        digitalWrite(3,LOW);
        //Varies of 8 and 10 and one other up
        digitalWrite(2,HIGH);
        digitalWrite(1,LOW);
        digitalWrite(3,HIGH);
        run(); //7
        digitalWrite(3,LOW);
        //All on
        digitalWrite(0,HIGH);
        digitalWrite(1,HIGH);
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        run(); //8
        //All off
        digitalWrite(0,LOW);
        digitalWrite(1,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        run(); //9
        // no 8 but solos
        digitalWrite(1,HIGH);
        run(); //10
        digitalWrite(1,LOW);
        digitalWrite(2,HIGH);
        run(); //11
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        run(); //12
        digitalWrite(3,LOW);
        //just 9 and one other on
        digitalWrite(1,HIGH);
        digitalWrite(2,HIGH);
        run(); //13
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        run(); //14
        digitalWrite(1,LOW);
        //10 and 11 only
        digitalWrite(2,HIGH);
        digitalWrite(8,HIGH);
        run(); //15
        //9 and 10 and 11] up
        digitalWrite(3,HIGH);
        digitalWrite(1,HIGH);
        digitalWrite(2,HIGH);
        run(); //16
      
      Serial.println();
    }

}

void run(){
            //Varies of 8 and one other high
        digitalWrite(8,HIGH);
        int fsrValue = analogRead(fsrPin);
        Serial.print(fsrValue); //1
          delay(0);
        digitalWrite(9,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //2
          delay(0);
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //3
          delay(0);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //4
          delay(0);
        digitalWrite(11,LOW);
        //Varies of 8 and 9 and one other high
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //5
          delay(0);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //6
          delay(0);
        digitalWrite(11,LOW);
        //Varies of 8 and 10 and one other up
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //7
          delay(0);
        digitalWrite(11,LOW);
        //All on
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //8
          delay(0);
        //All off
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //9
          delay(0);
        // no 8 but solos
        digitalWrite(9,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //10
          delay(0);
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //11
          delay(0);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //12
          delay(0);
        digitalWrite(11,LOW);
        //just 9 and one other on
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //13
          delay(0);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //14
          delay(0);
        digitalWrite(9,LOW);
        //10 and 11 only
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //15
          delay(0);
        //9 and 10 and 11] up
        digitalWrite(11,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        fsrValue = analogRead(fsrPin); // Read FSR value from analog pin
        Serial.print(fsrValue + " "); //16
          delay(0);
  }