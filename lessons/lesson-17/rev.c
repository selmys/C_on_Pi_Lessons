#include <stdio.h>
#define N 11
void print(int x[], int i);
void reverse(int x[], int i);

int main() {
	int x[N] = {0,1,1,2,3,5,8,13,21,34,55}; //fibonacci sequence
	print(x,N);
	reverse(x,N);
	print(x,N);
	return 0;
}

void print(int x[], int i) {
	int j;
	for(j=0;j<i;j++)
		printf("%d ",x[j]);
	printf("\n");
}

void reverse(int x[], int i) {
	int j;
	int t;
	i = i - 1;
	for(j=0;j<=i/2;j++) {
		t=x[j];
		x[j] = x[i-j];
		x[i-j] = t;
	}
}
