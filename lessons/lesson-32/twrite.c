#include <stdio.h>

int main() {
	FILE *fp = fopen("newfile.txt", "w");
	for(int i=12;i<20;i++) {
		fprintf(fp,"%d\n",i);
	}
	fclose(fp);
	return 0;
}
