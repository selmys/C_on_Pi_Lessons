#include <stdio.h>
#include <math.h>

int main() {
	float result, result1;
	float x=2.0;
	float y=5.0;
	result = powf(x,y);  //2 to the power of 5
	printf("The value of 2 to the power of 5 is %f\n", result);
	result1 = sqrtf(result);
	printf("The square root of %f is %f\n", result, result1);
	return 0;
}
