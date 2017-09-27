#include <stdio.h>
#include <wiringPi.h>

#define TRIG 23
#define ECHO 24

int getCM();

int main() {
	int i, distance;
	wiringPiSetupGpio();
	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
	for(i=0;i<60;i++) {
		distance = getCM();
		printf("Distance is %d cm\n", distance);
		delay(500);
	}
	return 0;
}

int getCM() {
	int start_time, end_time;
	digitalWrite(TRIG, LOW);
	delay(100);
	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);
	digitalWrite(TRIG, LOW);
	
	while(digitalRead(ECHO) == LOW); //wait for echo
	start_time = micros();
	while(digitalRead(ECHO) == HIGH); // got echo
	end_time = micros();
	return (end_time - start_time)/58; //v=d/t, d=v*t	
}
