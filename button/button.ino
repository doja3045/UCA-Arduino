void setup() {
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
  

}

void loop() {
  if (digitalRead(8) == LOW) {
    Serial.println("1");
    digitalWrite(5, HIGH);
  } else if(digitalRead(8) == HIGH){
    Serial.println("0");
    digitalWrite(5, LOW);
  }
  
}
