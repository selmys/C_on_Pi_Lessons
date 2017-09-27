#include <wiringPi.h>

#define RED_LED_GPIO 25
#define GREEN_LED_GPIO 24

int main() {
	wiringPiSetupGpio();
	pinMode(RED_LED_GPIO,OUTPUT);
	pinMode(GREEN_LED_GPIO,OUTPUT);
	
	digitalWrite(RED_LED_GPIO,HIGH);
	digitalWrite(GREEN_LED_GPIO,LOW);
	delay(3000);
	digitalWrite(RED_LED_GPIO,LOW);
	digitalWrite(GREEN_LED_GPIO,HIGH);
	delay(3000);
	digitalWrite(RED_LED_GPIO,HIGH);
	digitalWrite(GREEN_LED_GPIO,HIGH);
	delay(3000);
	digitalWrite(RED_LED_GPIO,LOW);
	digitalWrite(GREEN_LED_GPIO,LOW);

	return 0;
}
