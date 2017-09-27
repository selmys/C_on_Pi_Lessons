#include <stdio.h>
#include <wiringPi.h>
#define GRN0	2
#define RED0	3
#define GRN1	17
#define RED1	27
#define GRN2	10
#define RED2	9
#define GRN3	5
#define RED3	6
#define GRN4	19
#define RED4	26
#define GRN5	14
#define RED5	15
#define GRN6	23
#define RED6	24
#define GRN7	8
#define RED7	7
#define GRN8	20
#define RED8	21

#define PAUSETIME 10

int main() {
	int i,j;
	wiringPiSetupGpio();
	pinMode(GRN0, OUTPUT);digitalWrite(GRN0,LOW);
	pinMode(GRN1, OUTPUT);digitalWrite(GRN1,LOW);
	pinMode(GRN2, OUTPUT);digitalWrite(GRN2,LOW);
	pinMode(GRN3, OUTPUT);digitalWrite(GRN3,LOW);
	pinMode(GRN4, OUTPUT);digitalWrite(GRN4,LOW);
	pinMode(GRN5, OUTPUT);digitalWrite(GRN5,LOW);
	pinMode(GRN6, OUTPUT);digitalWrite(GRN6,LOW);
	pinMode(GRN7, OUTPUT);digitalWrite(GRN7,LOW);
	pinMode(GRN8, OUTPUT);digitalWrite(GRN8,LOW);
	pinMode(RED0, OUTPUT);digitalWrite(RED0,LOW);
	pinMode(RED1, OUTPUT);digitalWrite(RED1,LOW);
	pinMode(RED2, OUTPUT);digitalWrite(RED2,LOW);
	pinMode(RED3, OUTPUT);digitalWrite(RED3,LOW);
	pinMode(RED4, OUTPUT);digitalWrite(RED4,LOW);
	pinMode(RED5, OUTPUT);digitalWrite(RED5,LOW);
	pinMode(RED6, OUTPUT);digitalWrite(RED6,LOW);
	pinMode(RED7, OUTPUT);digitalWrite(RED7,LOW);
	pinMode(RED8, OUTPUT);digitalWrite(RED8,LOW);
	
	for(j=0;j<10;j++) {
	for(i=0;i<9;i++) {
		switch (i) {
			case 0: digitalWrite(RED0,HIGH); delay(PAUSETIME); digitalWrite(RED0,LOW); break;
			case 1: digitalWrite(RED1,HIGH); delay(PAUSETIME); digitalWrite(RED1,LOW); break;
			case 2: digitalWrite(RED2,HIGH); delay(PAUSETIME); digitalWrite(RED2,LOW); break;
			case 3: digitalWrite(RED3,HIGH); delay(PAUSETIME); digitalWrite(RED3,LOW); break;
			case 4: digitalWrite(RED4,HIGH); delay(PAUSETIME); digitalWrite(RED4,LOW); break;
			case 5: digitalWrite(RED5,HIGH); delay(PAUSETIME); digitalWrite(RED5,LOW); break;
			case 6: digitalWrite(RED6,HIGH); delay(PAUSETIME); digitalWrite(RED6,LOW); break;
			case 7: digitalWrite(RED7,HIGH); delay(PAUSETIME); digitalWrite(RED7,LOW); break;
			case 8: digitalWrite(RED8,HIGH); delay(PAUSETIME); digitalWrite(RED8,LOW); break;
		}
	}
	for(i=0;i<9;i++) {
		switch (i) {
			case 0: digitalWrite(GRN0,HIGH); delay(PAUSETIME); digitalWrite(GRN0,LOW); break;
			case 1: digitalWrite(GRN1,HIGH); delay(PAUSETIME); digitalWrite(GRN1,LOW); break;
			case 2: digitalWrite(GRN2,HIGH); delay(PAUSETIME); digitalWrite(GRN2,LOW); break;
			case 3: digitalWrite(GRN3,HIGH); delay(PAUSETIME); digitalWrite(GRN3,LOW); break;
			case 4: digitalWrite(GRN4,HIGH); delay(PAUSETIME); digitalWrite(GRN4,LOW); break;
			case 5: digitalWrite(GRN5,HIGH); delay(PAUSETIME); digitalWrite(GRN5,LOW); break;
			case 6: digitalWrite(GRN6,HIGH); delay(PAUSETIME); digitalWrite(GRN6,LOW); break;
			case 7: digitalWrite(GRN7,HIGH); delay(PAUSETIME); digitalWrite(GRN7,LOW); break;
			case 8: digitalWrite(GRN8,HIGH); delay(PAUSETIME); digitalWrite(GRN8,LOW); break;
		}
	}
}
	return 0;
}
