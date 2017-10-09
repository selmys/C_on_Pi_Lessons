#include <stdio.h>

int main() {
	int x=3,y=4,z=5;
	int a;
	// unary operator
	a=++x; //++ is unary working on one operand x
	printf("a is %d\n",a);
	a=-a;  //- is a unary operator working one operand a
	printf("a is %d\n",a);
	//binary operators
	a=x+y; //+ is a binary operator working on 2 operands x and y
	printf("a is %d\n",a);
	
	//trinary operator
	a=x>y?44:55; //?: is a trinary operator working on 3 operands
					// x>y and 44 and 55
	printf("a is %d\n",a);
	return 0;
}
	
