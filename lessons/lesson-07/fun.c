#include <stdio.h>
void doit(int *);

int main() {
	int x=3;
	printf("The adress of x is %p\n", &x);
	doit(&x);
	printf("The value of x is %d\n",x);
	return 0;
}

void doit(int *y) {
	printf("The value of y is %d\n",*y);
	*y = *y + 1;
	printf("The value of y is %d\n",*y);
}
