#include <stdio.h>

int main() {
	int i;
	for(i=0; i<20; i++) {
		printf("%o\t%d\t%x\n",i,i,i);
	}
	return 0;
}
