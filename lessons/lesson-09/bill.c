#include <stdio.h>
void total(float, float);
float amount;

int main() {
	float cost, tax;
	printf("Enter cost of item: ");
	scanf("%f",&cost);
	printf("Enter tax percent: ");
	scanf("%f", &tax);
	total(cost, tax); 
	printf("Your amount is %f\n", amount);
	return 0;
}

void total(float c, float t) {
	amount = c + t/100*c;
	printf("The value of a is %f\n",amount);
}
