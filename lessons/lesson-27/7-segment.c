#include <wiringPi.h>
#define A_LED_GPIO 17
#define B_LED_GPIO 23
#define C_LED_GPIO 24
#define D_LED_GPIO 18
#define E_LED_GPIO 4
#define F_LED_GPIO 21
#define G_LED_GPIO 22

void digit(int);

int main() {
	int i;
	wiringPiSetupGpio();
	pinMode(A_LED_GPIO,OUTPUT); //17
	pinMode(B_LED_GPIO,OUTPUT); //23
	pinMode(C_LED_GPIO,OUTPUT); //24
	pinMode(D_LED_GPIO,OUTPUT); //18
	pinMode(E_LED_GPIO,OUTPUT); //4
	pinMode(F_LED_GPIO,OUTPUT); //21
	pinMode(G_LED_GPIO,OUTPUT); //22

	for(i=0;i<10;i++) {
		digit(i);
		delay(1000);
	}
	digitalWrite(A_LED_GPIO,LOW);
	digitalWrite(B_LED_GPIO,LOW);
	digitalWrite(C_LED_GPIO,LOW);
	digitalWrite(D_LED_GPIO,LOW);
	digitalWrite(E_LED_GPIO,LOW);
	digitalWrite(F_LED_GPIO,LOW);
	digitalWrite(G_LED_GPIO,LOW);
	return 0;
}
	
void digit(int n) {
	switch (n) {
		case 0:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,HIGH);
			digitalWrite(E_LED_GPIO,HIGH);
			digitalWrite(F_LED_GPIO,HIGH);
			digitalWrite(G_LED_GPIO,LOW);
			break;
		case 1:	digitalWrite(A_LED_GPIO,LOW);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,LOW);
			digitalWrite(E_LED_GPIO,LOW);
			digitalWrite(F_LED_GPIO,LOW);
			digitalWrite(G_LED_GPIO,LOW);
			break;
		case 2:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,LOW);
			digitalWrite(D_LED_GPIO,HIGH);
			digitalWrite(E_LED_GPIO,HIGH);
			digitalWrite(F_LED_GPIO,LOW);
			digitalWrite(G_LED_GPIO,HIGH);
			break;
		case 3:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,HIGH);
			digitalWrite(E_LED_GPIO,LOW);
			digitalWrite(F_LED_GPIO,LOW);
			digitalWrite(G_LED_GPIO,HIGH);
			break;
		case 4:	digitalWrite(A_LED_GPIO,LOW);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,LOW);
			digitalWrite(E_LED_GPIO,LOW);
			digitalWrite(F_LED_GPIO,HIGH);
			digitalWrite(G_LED_GPIO,HIGH);
			break;
		case 5:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,LOW);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,HIGH);
			digitalWrite(E_LED_GPIO,LOW);
			digitalWrite(F_LED_GPIO,HIGH);
			digitalWrite(G_LED_GPIO,HIGH);
			break;
		case 6:	digitalWrite(A_LED_GPIO,LOW);
			digitalWrite(B_LED_GPIO,LOW);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,HIGH);
			digitalWrite(E_LED_GPIO,HIGH);
			digitalWrite(F_LED_GPIO,HIGH);
			digitalWrite(G_LED_GPIO,HIGH);
			break;
		case 7:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,LOW);
			digitalWrite(E_LED_GPIO,LOW);
			digitalWrite(F_LED_GPIO,LOW);
			digitalWrite(G_LED_GPIO,LOW);
			break;
		case 8:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,HIGH);
			digitalWrite(E_LED_GPIO,HIGH);
			digitalWrite(F_LED_GPIO,HIGH);
			digitalWrite(G_LED_GPIO,HIGH);
			break;
		case 9:	digitalWrite(A_LED_GPIO,HIGH);
			digitalWrite(B_LED_GPIO,HIGH);
			digitalWrite(C_LED_GPIO,HIGH);
			digitalWrite(D_LED_GPIO,LOW);
			digitalWrite(E_LED_GPIO,LOW);
			digitalWrite(F_LED_GPIO,HIGH);
			digitalWrite(G_LED_GPIO,HIGH);
			break;	
	}
}
