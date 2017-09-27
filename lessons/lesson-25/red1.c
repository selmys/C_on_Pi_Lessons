#include <stdio.h>

int main() {
	printf("\e[10;30H"); // move cursor to line 10, column 30
	printf("Default \e[92mLight green \e[31mRed\e[0m");
	return 0;
}
