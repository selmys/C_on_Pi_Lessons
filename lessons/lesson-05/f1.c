#include <stdio.h>
void myhello(int);
void mygoodbye();

int main() {
	int i; // i is the ACTUAL parameter used by myhello
	for(i=0; i<10; i=i+1) {
		myhello(i);  //CALL BY VALUE - the ACTUAL parameter(s)
					 // are copied to the FORMAL parameter(s)
					 // some people use the term ARGUMENT(S) instead
					 // of PARAMETER(S)
	}
	return 0;
}

void myhello(int xyz) {
	// xyz is the FORMAL parameter used by myhello
	printf("%d - Hello world!\n",xyz);
	mygoodbye();
}

void mygoodbye() {
	printf("Goodbye world!\n");
}

