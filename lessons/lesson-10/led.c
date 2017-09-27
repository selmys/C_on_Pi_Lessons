#include <wiringPi.h>
#define LED_GPIO 25

int main() {
	int i;
	wiringPiSetupGpio();
	pinMode(LED_GPIO,OUTPUT);  // 25=GPIO#, 1=output
	for(i=0;i<10;i++) {
		digitalWrite(LED_GPIO,HIGH); //1=high voltage = 3.3v
		delay(1000); // wait for 1000 milliseconds (1 seconds)
		digitalWrite(LED_GPIO,LOW); //0=low voltage = 0v
		delay(1000);
	}
	return 0;
}
	

