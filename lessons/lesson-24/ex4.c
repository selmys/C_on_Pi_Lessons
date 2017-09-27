#include <stdio.h>

int main() {
	int i=3;
	float j=4.2;
	double k=2.1;
	long long l=5;
	char x='J';
	printf("size of i is %d and size of j is %d\n", sizeof(i),sizeof(j));
	printf("size of k is %d\n", sizeof(k));
	printf("size of l is %d\n", sizeof(l));
	printf("size of x is %d\n", sizeof(x));
	return 0;
}
