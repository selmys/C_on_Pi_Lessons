#include <stdio.h>

int main() {
	int i=3,j; // 3 in binary is 000011
	j = i >> 1; // 000001
	printf("j is %d and i is %d\n", j,i);
	return 0;
}
