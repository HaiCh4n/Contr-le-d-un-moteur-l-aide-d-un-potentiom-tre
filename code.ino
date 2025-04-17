#include <Servo.h>

int analog = A0;      // Biến trở
int digital = 7;      // Servo gắn vào D9
int position = 0;

Servo hai;

void setup() {
hai.attach(digital);
Serial.begin(9600);
}

void loop() {
  int doc_analog = analogRead(analog);
  position = map(doc_analog,0,1023,0,180);
  Serial.print("postion "); Serial.println(position);
  hai.write(position);
  delay(500);
}
