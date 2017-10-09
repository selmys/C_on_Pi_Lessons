#include <stdio.h>

int main() {
	int j=10;
	void abc(int);
	abc(j);
	return 0;
}

void abc(int x) {
	int arr[x];
	for(int i=0,j=2;i<x;i++) {
		//int j=2;
		arr[i]=j*i;
		printf("%d\n",arr[i]);
	}
	// i and j are not visible
	//printf("i is %d\n",i);
}
