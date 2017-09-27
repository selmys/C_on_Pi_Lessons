#include <stdio.h>
float total(float, float);

int main() {
	float cost, tax, amount=0.0;
	printf("Enter cost of item: ");
	scanf("%f",&cost);
	printf("Enter tax percent: ");
	scanf("%f", &tax);
	amount = total(cost, tax); 
	printf("Your amount is %f\n", amount);
	return 0;
}

float total(float c, float t) {
	float a;
	a = c + t/100*c;
	printf("The value of a is %f\n",a);
	return a;
}
