

#include<Servo.h>
Servo servo1;
Servo servo2;
int servoPos = 1;

void setup() {
  servo1.attach(4);
  servo2.attach(5);
  }

void loop() {
  for (servoPos=0; servoPos<180; servoPos++){
      servo1.write(servoPos);
      servo2.write(servoPos);
        delay(10);
        }
   for (servoPos=180; servoPos>0; servoPos--){
      servo1.write(servoPos);
      servo2.write(servoPos);
        delay(10);
        }

 }
