#include <ESP32Servo.h>  

Servo myservo;
const int potPin   = 34; 
const int servoPin = 18;  

void setup() {
  myservo.setPeriodHertz(50);       
  myservo.attach(servoPin, 500, 2400); 
}

void loop() {
  int potValue = analogRead(potPin);            
  int angle = map(potValue, 0, 4095, 0, 180);
  myservo.write(angle);
  delay(10);
}
