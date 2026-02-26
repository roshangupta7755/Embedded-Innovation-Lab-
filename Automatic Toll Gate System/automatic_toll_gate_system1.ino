// C++ code
//
#include <Servo.h>

int Distence = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_3;

void setup()
{
  Serial.begin(9600);
  servo_3.attach(3, 500, 2500);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  Distence = 0.01723 * readUltrasonicDistance(5, 6);
  Serial.println(Distence);
  if (Distence < 40) {
    servo_3.write(90);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    servo_3.write(180);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}