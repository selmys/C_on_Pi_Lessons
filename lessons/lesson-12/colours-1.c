#include <stdio.h>
#include <string.h>
#include <wiringPi.h>

#define RED_LED_GPIO 25
#define GREEN_LED_GPIO 24
#define BLUE_LED_GPIO 23

int main() {
	char colour[10];
	
	wiringPiSetupGpio();
	pinMode(RED_LED_GPIO,OUTPUT);
	pinMode(GREEN_LED_GPIO,OUTPUT);
	pinMode(BLUE_LED_GPIO,OUTPUT);
	
	printf("Enter a colour <red/green/blue>: ");
	scanf("%s",colour); // colour is the beginning address of the array
	if(strcmp(colour, "red") == 0) {
		digitalWrite(RED_LED_GPIO,HIGH);
		delay(1000);
	}
	if(strcmp(colour, "green") == 0) {
		digitalWrite(GREEN_LED_GPIO,HIGH);
	}
	if(strcmp(colour, "blue") == 0) {
		digitalWrite(BLUE_LED_GPIO,HIGH);
	}
		
	delay(2000);
	digitalWrite(RED_LED_GPIO,LOW); 
	digitalWrite(GREEN_LED_GPIO,LOW); 
	digitalWrite(BLUE_LED_GPIO,LOW);
	return 0;
}
	
	
