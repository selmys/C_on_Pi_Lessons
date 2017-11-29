#include <stdio.h>
int main() {
	// array by itself is the address of the beginning of the array
	// &array[0] is also the address of the beginning of the array
	// &array is also the address of the beginning of the array
	// array == &array[0] == &array
	
	// an integer array is almost the same as a pointer to an integer
	// but not quite.
	// they are different because you can assign a value to the pointer
	// but not to the array
	int array[] = {2,4,6,8}; //4 integers x 4 bytes = 16 bytes total
	int *p;
	printf("size of array is %d\n", sizeof(array));
	printf("size of array[0] is %d\n", sizeof(array[0]));
	p = array;
	printf("P is %p\n",p);
	p++; //add 1 to p (add 1 integer length to p)
	printf("P is %p\n",p);
	printf("The value at address p is %d\n",*p);
	return 0;
}
