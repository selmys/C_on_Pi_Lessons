#include <stdio.h>
#include <string.h>

struct Address {
	char city[10];
	char postal_code[7];
	char street[20];
	int number;
};

struct Student {
	char name[10];
	int age;
	struct Address a;
};

void print(struct Student);

int main() {
	struct Student s;	// use "dot notation" to access parts of a structure
	strcpy(s.name, "john");
	s.age = 22;
	print(s);
	return 0;
}

void print(struct Student x) {
	printf("Name is %s\n", x.name);
	printf("Age is %d\n", x.age);
}
	
	
	

