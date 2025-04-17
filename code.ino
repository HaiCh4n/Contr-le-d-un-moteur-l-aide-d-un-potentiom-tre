#include <Servo.h>

int analog = A0;      // Biến trở
int digital = 5;      
int angle = 0;

Servo hai;

void setup() {
hai.attach(digital);
Serial.begin(9600);
}

void loop() {
  int doc_analog = analogRead(analog);
  angle = map(doc_analog,0,1023,0,180);
  Serial.print("angle "); Serial.println(angle);   //For checking where exacly we are
  hai.write(angle);
  delay(500);
}
