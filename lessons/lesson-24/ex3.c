#include <stdio.h>

int main() {
	int i=3,j=5; // 3 in binary is 000011, 
				 //           5 is 000101
				 //                000110 = 6
	int k;
	k = i ^ j;
	printf("j is %d and i is %d and k is %d\n", j,i,k);
	return 0;
}
