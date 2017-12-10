#include <stdio.h>

int main() {
	int x;
	FILE *fp = fopen("file.bin", "rb");
	fread(&x, 4, 1, fp);
	fclose(fp);
	printf("The value of x is %d\n",x);
	return 0;
}
