#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef unsigned char u8;
typedef unsigned short u16;

struct data {
	u8 mp;
	u8 rc;
	u16 m0;
	u16 m1;
	u16 m2;
};

int main() {
	struct data t;
	FILE *fp;
	for(int i=0; i<100; i++) {
		fp = fopen("/dev/hidraw0","rb");
		fread(&t,sizeof(struct data),1,fp);
		printf("m0 is %d\n",t.m0);
		printf("Temperature is %5.1f\n",t.m0/127.0);
		fclose(fp);
		sleep(5);
	}
	return 0;
}
