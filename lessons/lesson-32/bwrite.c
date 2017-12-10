#include <stdio.h>

int main() {
	int x=1234;
	FILE *fp = fopen("file.bin", "wb");
	fwrite(&x, 4, 1, fp);
	fclose(fp);
	return 0;
}
