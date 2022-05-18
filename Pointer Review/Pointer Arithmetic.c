#include <stdio.h>

int math() {
	int a = 2;
	int* b = &a;
	int** c = &b;
	int ans;
	printf("B's true address is %p\n\n", (void *) &b); 
	//printf("Address b is %d\n", &b);
	//printf("Size of integer is %d\n", sizeof(a));

	printf("Value at address b is %d\n\n", *b);

	printf("Adding 1 to point b is %d\n\n", (*b + 1));
	
	printf("Address a is %p\n\n", &a);

	printf("**** Address b will point to a's address: %p\n\n", (void*) b);

	printf("Address b+1 is %p\n", (b + 1));
	return NULL;
}