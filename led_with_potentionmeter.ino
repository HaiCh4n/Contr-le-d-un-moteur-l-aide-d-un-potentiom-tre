
#include <Servo.h>
int Leds[] = {3,4,5};
Servo hai;
int analog = A0;
int digital = 7;
int vitri;


void setup()
{
	hai.attach(digital);
  	Serial.begin(9600);
  for(int i = 0; i<3;i++){
  	pinMode(Leds[i], OUTPUT);
  }
}

void loop()
{
	int doc_analog = analogRead(analog);
  	vitri = map(doc_analog,0,1023,0,180);
	Serial.print("Goc Hien Tai: "); Serial.println(vitri);
  if(vitri>=0 && vitri <=60) {
    digitalWrite(Leds[0],HIGH);
    digitalWrite(Leds[1],LOW);
    digitalWrite(Leds[2],LOW);
    
  }	else if(vitri>60 && vitri <=120){
    digitalWrite(Leds[0],LOW);
    digitalWrite(Leds[1],HIGH);
    digitalWrite(Leds[2],LOW);
  }else{
  	digitalWrite(Leds[0],LOW);
    digitalWrite(Leds[1],LOW);
    digitalWrite(Leds[2],HIGH);
  }
  	hai.write(vitri);
 	delay(200);
}
