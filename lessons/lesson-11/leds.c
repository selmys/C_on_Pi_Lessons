#include <wiringPi.h>
#define RED_LED_GPIO 25
#define GREEN_LED_GPIO 24
#define BLUE_LED_GPIO 23

int main() {
	int i;
	wiringPiSetupGpio();
	pinMode(RED_LED_GPIO,OUTPUT);
	pinMode(GREEN_LED_GPIO,OUTPUT);
	pinMode(BLUE_LED_GPIO,OUTPUT);
	for(i=0;i<5;i++) {
		digitalWrite(RED_LED_GPIO,HIGH); 
		delay(1000); 
		digitalWrite(GREEN_LED_GPIO,HIGH); 
		delay(1000);
		digitalWrite(BLUE_LED_GPIO,HIGH);
		delay(1000);
		digitalWrite(RED_LED_GPIO,LOW); 
		delay(1000); 
		digitalWrite(GREEN_LED_GPIO,LOW); 
		delay(1000);
		digitalWrite(BLUE_LED_GPIO,LOW);
		delay(1000);
	}
	return 0;
}
	

