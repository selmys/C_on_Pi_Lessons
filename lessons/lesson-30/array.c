#include <stdio.h>

int main() {
	int x[] = {1,3,5,7};
	int *p;
	for(int i=0;i<4;i++) {
		printf("x[%d] = %d\n",i,x[i]);
	}
	p=&x[1];
	printf("*p is %d\n",*p);
	printf("p is %p\n",p);
	p++; //pointer arithmetic
	printf("p is now %p\n",p);
	printf("*p is %d\n",*p);
	printf("x is %p, &x[0] is %p\n", x, &x[0]);
	return 0;
}
