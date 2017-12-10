#include <stdio.h>

int main() {
	FILE *fp = fopen("file.txt", "r");
	int x;
	fscanf(fp,"%d", &x);
	while (!feof(fp)) {		//continue loop until end of file
		printf("x is %d\n",x);
		fscanf(fp,"%d", &x);
	}
	fclose(fp);
	return 0;
}
