#include <stdio.h>

int main() {
	int i,t1,t2,t3,n;
	printf("Enter 1st two terms followed by the # of terms ");
	scanf("%d %d %d", &t1,&t2,&n);
	if(n < 3) {
		printf("Error, n must be > 2\n");
		return 1;
	}
	printf("%d %d ",t1,t2);
	for(i=2;i<n;i++) {
		t3 = t1+t2;
		printf("%d ",t3);
		t1=t2;
		t2=t3;
	}
	printf("\n");
	printf("The golden ratio is %f\n",(float)t1/(float)t2);
	return 0;
}
