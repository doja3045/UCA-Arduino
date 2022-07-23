void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  //digitalWrite(5, HIGH)
}

void loop() {
  /*;
  for(int i=0; i<256; i++){
    analogWrite(5,i);
    delay(11);
  }
  */
  int a = analogRead(A0);
  Serial.println(a);
  if(a < 400){
    digitalWrite(5, HIGH);
   
  }
  
}
