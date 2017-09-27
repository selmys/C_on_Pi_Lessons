#include <wiringPi.h>
#include <softPwm.h>

#define RED 23
#define GRN 24
#define BLU 25

int main() {
	int i;
	wiringPiSetupGpio();
	
	// Our rgb led uses common anode
	softPwmCreate(RED, 0, 100);
	softPwmCreate(GRN, 0, 100);
	softPwmCreate(BLU, 0, 100);
	
	softPwmWrite(RED, 100); // turn RED off
	softPwmWrite(GRN, 100); // turn BLU off
	delay(100);
	
	for(i=100;i>=0;i--) {
		softPwmWrite(BLU,i);
		delay(50);
	}
	
	delay(500);
	 
	for(i=0;i<=100;i++) {
		softPwmWrite(BLU,i);
		delay(50);
	}
	
	return 0;
}
