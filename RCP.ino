#include <Servo.h>

Servo myservo;

//Digital
int pinServo = 3;
int pinLOM = 11;
int pinLOm = 10;

//Analog
int pulsePin = 2;

//Restriction
int minHeart = 500;

void setup() {
  myservo.attach(pinServo);
  pinMode(pinLOm,INPUT);
  pinMode(pinLOM,INPUT);
}

void loop() {
  if ((digitalRead(LOM) == 1)||(digitalRead(LOm) == 1) && analogRead(pulsePin)<minHeart){
    myservo.write(90);
    delay(1000);
    myservo.write(0);
    delay(1000);
    myservo.write(90);
    delay(500);
    myservo.write(0);
    delay(500);
    myservo.write(90);
    delay(500);
    myservo.write(0);
    delay(500);
  } to the scaled value
  delay(15);
}
