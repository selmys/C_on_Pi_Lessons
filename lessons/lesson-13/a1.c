#include <stdio.h>

int main() {
	char x[11] = {'a','b','c','d','e','f','g','\0','i','j','\0'};
	int i;
	for(i=0;i<11;i++) {
		printf("The value of x[%d] is %c\n", i, x[i]);
	}
	return 0;
}
