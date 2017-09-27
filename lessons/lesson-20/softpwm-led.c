#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#include <softPwm.h>

#define GREEN 21
#define PAUSE 50

int main() {
	int x;
	if(getuid() != 0) {
		printf("You must be root to use PWM\n");
		return 1;
	}
	wiringPiSetupGpio();
	pinMode(GREEN, OUTPUT);
	digitalWrite(GREEN, LOW);
	
	softPwmCreate(GREEN, 0, 100); // 0=0v, 100=3.3v
	
	for(x=0; x<=100; x++) { // 0 to 100, 100=3.3volts
		softPwmWrite(GREEN,x);
		delay(PAUSE);
	} //10 second loop
	
	for(x=100; x>=0; x--) {
		softPwmWrite(GREEN,x);
		delay(PAUSE);
	} //10 second loop
	return 0;
}
