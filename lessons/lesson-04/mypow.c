#include <stdio.h>

float mypowf(float x, float y);
	
int main() {
	float x=2.0;
	float y=5.5;
	float r;
	r=mypowf(x,y);
	printf("%f to the power of %f is %f\n",x,y,r);
	return 0;
}

float mypowf(float x, float y) {
	// multiply x by itself y times
	// only works when y is a whole number
	int count=y;
	int i;
	float r=1;
	for(i=1; i<=count; i++) {
		r = r*x;
	}
	return r;
}
