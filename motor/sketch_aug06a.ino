#include <Stepper.h>

int stepsPerRev = 2048;
Stepper stepper(stepsPerRev,11,9,10,8);

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  stepper.setSpeed(10); 

}

void loop() {
  if (digitalRead(3) == LOW){
    Serial.println("시계방향으로 돌아갑니다.");
    stepper.step(1);
    
  }
  else if (digitalRead(5) == LOW) {
    Serial.println("반시계방향으로 돌아갑니다.");
    stepper.step(-1);
    
  }

}
