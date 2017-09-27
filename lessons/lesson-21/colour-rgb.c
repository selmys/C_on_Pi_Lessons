#include <wiringPi.h>
#include <softPwm.h>

#define RED 23
#define GRN 24
#define BLU 25

void colour(int, int, int);

int main() {
	int i;
	wiringPiSetupGpio();
	
	// Our rgb led uses common anode
	softPwmCreate(RED, 0, 100);
	softPwmCreate(GRN, 0, 100);
	softPwmCreate(BLU, 0, 100);
	
	colour(100,100,100);
	
	delay(1000);
	
	colour(0,0,100);
	
	delay(3000);
	
	colour(100,100,100);
	
	return 0;
}

void colour(int r, int g, int b) {
	delay(100);
	softPwmWrite(RED,r);
	softPwmWrite(GRN,g);
	softPwmWrite(BLU,b);
	delay(100);
}
