#include <stdio.h>
#include <wiringPi.h>

int main() {
	int i,x;
	int begin, end;
	
	begin=micros();	
	for(i=0;i<1000000;i++)
		x+=i;	//another way of saying x=x+i
	end=micros();	
	
	printf("Time taken was %d microseconds\n", end-begin);
	return 0;
}
	
