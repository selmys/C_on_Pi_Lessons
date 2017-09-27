#include <stdio.h>
#include <locale.h>

int main() {
	unsigned short Wk=0x265A;
	setlocale(LC_CTYPE, "");
	printf("\e[31m");
	printf("%lc",Wk);
	printf("\e[39m\n");
	return 0;
}
