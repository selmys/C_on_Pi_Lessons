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
	for(i=0;i<8;i++) {
		switch (i) {
			case 0:
				digitalWrite(RED_LED_GPIO,LOW); 
				digitalWrite(GREEN_LED_GPIO,LOW); 
				digitalWrite(BLUE_LED_GPIO,LOW);
				break;
			case 1:
				digitalWrite(RED_LED_GPIO,LOW); 
				digitalWrite(GREEN_LED_GPIO,LOW); 
				digitalWrite(BLUE_LED_GPIO,HIGH);
				break;
			case 2:
				digitalWrite(RED_LED_GPIO,LOW); 
				digitalWrite(GREEN_LED_GPIO,HIGH); 
				digitalWrite(BLUE_LED_GPIO,LOW);
				break;
			case 3:
				digitalWrite(RED_LED_GPIO,LOW); 
				digitalWrite(GREEN_LED_GPIO,HIGH); 
				digitalWrite(BLUE_LED_GPIO,HIGH);
				break;
			case 4:
				digitalWrite(RED_LED_GPIO,HIGH); 
				digitalWrite(GREEN_LED_GPIO,LOW); 
				digitalWrite(BLUE_LED_GPIO,LOW);
				break;
			case 5:
				digitalWrite(RED_LED_GPIO,HIGH); 
				digitalWrite(GREEN_LED_GPIO,LOW); 
				digitalWrite(BLUE_LED_GPIO,HIGH);
				break;
			case 6:
				digitalWrite(RED_LED_GPIO,HIGH); 
				digitalWrite(GREEN_LED_GPIO,HIGH); 
				digitalWrite(BLUE_LED_GPIO,LOW);
				break;
			case 7:
				digitalWrite(RED_LED_GPIO,HIGH); 
				digitalWrite(GREEN_LED_GPIO,HIGH); 
				digitalWrite(BLUE_LED_GPIO,HIGH);
				break;	
			}
			delay(2000);
	}
	digitalWrite(RED_LED_GPIO,LOW); 
	digitalWrite(GREEN_LED_GPIO,LOW); 
	digitalWrite(BLUE_LED_GPIO,LOW);
	return 0;
}
	

