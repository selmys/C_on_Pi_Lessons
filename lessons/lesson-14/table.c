#include <stdio.h>

int main() {
	int table[3][4] = { {0,1,2,3},
					    {4,5,6,7},
					    {8,9,10,11}
					  };
	int row,col;
	table[1][2] = -9;
	for(row=0;row<3;row++) {
		for(col=0;col<4;col++) 
			printf("%d\t",table[row][col]);
		printf("\n");
	}
	return 0;
}
