#include <stdio.h>

int main() {
	int **p1;		//p1 is a pointer to a pointer which points to an int
	int *p;			//p is a pointer(address) to some integer
	int x=42;		//x is an integer initialized to 42
	p=&x;			//use the & (address of) to assign p to the 
					//address of x
	printf("x is %d\n",x);	//print x
	printf("p is %p\n",p);	//print p
	printf("value at p is %d\n",*p); //use * (dereference operator)
									 //to print the value at address p
	p1=&p;
	printf("p1 is %p\n",p1);	//print p1
	printf("value of p1 is %p\n",*p1); //value of p1
	printf("value of *p1 is %d\n",**p1); //value at *p1
	return 0;
}
