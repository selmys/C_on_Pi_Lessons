#include <stdio.h>

int main() {
	char x='J';
	char *p = &x;
	printf("the address of x is %p\n",&x);
	printf("the address of p is %p\n",&p);
	printf("p is %p\n",p);
	printf("x is %c\n",x);
	printf("*p is %c\n",*p);
	x='K';  //change x
	// for a small time x was equal to 'K'
	*p='L';  //change x
	printf("now x is %c\n",x);
	return 0;
}
