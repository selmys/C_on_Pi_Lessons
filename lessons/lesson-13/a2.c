#include <stdio.h>

int main() {
	int y[10];
	int i;
	y[0]=0;
	for(i=1;i<10;i++) {
		y[i] = y[i-1]+2;
	}
	for(i=0;i<10;i++) {
		printf("The value of y[%d] is %d\n", i, y[i]);
	}
	printf("The address of y is %p\n",y); // y is the start address of
										  // the array
	printf("The address of y[0] is %p\n", &y[0]);
	return 0;
}
