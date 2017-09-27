#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>

#define GREEN 18
#define PAUSE 10

int main() {
	int x;
	if(getuid() != 0) {
		printf("You must be root to use PWM\n");
		return 1;
	}
	wiringPiSetupGpio();
	pinMode(GREEN, OUTPUT);
	digitalWrite(GREEN, LOW);
	
	pinMode(GREEN, PWM_OUTPUT);
	
	for(x=0; x<1024; x++) { // 0 to 1023, 1023=3.3volts
		pwmWrite(GREEN,x);
		delay(PAUSE);
	} //10 second loop
	
	for(x=1023; x>=0; x--) {
		pwmWrite(GREEN,x);
		delay(PAUSE);
	} //10 second loop
	return 0;
}
