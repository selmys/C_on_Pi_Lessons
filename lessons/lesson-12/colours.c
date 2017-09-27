#include <stdio.h>
#include <wiringPi.h>

#define RED_LED_GPIO 25
#define GREEN_LED_GPIO 24
#define BLUE_LED_GPIO 23

int main() {
	char colour;
	
	wiringPiSetupGpio();
	pinMode(RED_LED_GPIO,OUTPUT);
	pinMode(GREEN_LED_GPIO,OUTPUT);
	pinMode(BLUE_LED_GPIO,OUTPUT);
	
	printf("Enter a colour <red/green/blue>: ");
	scanf("%c",&colour);
	if(colour == 'r' || colour == 'R')
		digitalWrite(RED_LED_GPIO,HIGH);
	if(colour == 'g')
		digitalWrite(GREEN_LED_GPIO,HIGH);
	if(colour == 'b')
		digitalWrite(BLUE_LED_GPIO,HIGH);
		
	delay(2000);
	digitalWrite(RED_LED_GPIO,LOW); 
	digitalWrite(GREEN_LED_GPIO,LOW); 
	digitalWrite(BLUE_LED_GPIO,LOW);
	return 0;
}
	
	
