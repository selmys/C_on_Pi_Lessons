#include <stdio.h>
#include <time.h>

int main() {
	struct timespec begin, end;
	int i,x;
	clock_gettime(CLOCK_REALTIME, &begin);
	
	for(i=0;i<1000000;i++)
		x+=i;	//another way of saying x=x+i
		
	clock_gettime(CLOCK_REALTIME, &end);	
	
	printf("Time taken was %f milliseconds\n", ((float)(end.tv_sec - begin.tv_sec) +
			(float)(end.tv_nsec - begin.tv_nsec)) / 1000000.0);
	return 0;
}
	
	
