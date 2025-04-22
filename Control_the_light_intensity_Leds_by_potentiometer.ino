
int analog = A0;
int leds = 7;
int Goc;

void setup(){
	Serial.begin(9600);
	pinMode(leds,OUTPUT);
}

void loop(){
	int Doc_analog = analogRead(analog);
  	Goc = map(Doc_analog,0,1023,0,255);  // 0-1023 -> 0-255
  	analogWrite(leds,Goc);  //Control the light intensity leds by potentiometer
  	delay(200);
}
