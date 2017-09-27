#include <stdio.h>
float in2cm(float);

int main() {
	float in;
	float cm;
	printf("Enter the number of inches to convert to centimeters: ");
	scanf("%f", &in); // &in means "address of in"
	cm = in2cm(in);
	printf("\n%f inches is %f centimeters\n",in,cm);
	return 0;
}

float in2cm(float x) {
	float result;
	result = x * 2.54;
	return result;
}
