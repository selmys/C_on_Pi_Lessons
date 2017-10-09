#include <stdio.h>

int main() {
	int x=3;
	{
		int x=4;
		printf("The value of x is %d\n",x);
		int y=22;
		printf("The value of y is %d\n",y);
		int z=9;
		printf("The value of z is %d\n",z);
	}
	printf("The value of x is %d\n",x);
	int z=33;
	printf("The value of z is %d\n",z);
	return 0;
}
