#include <stdio.h>

int types() {
	int a = 1025;
	int *p = &a;
	


	printf("Size of integer is: %d\n", sizeof(p));

	printf("Address = %p, value = %d\n", p, *p);
	char hi;
	char *p0;

	p0 = (char *)  p;

	printf("Size of char is: %d\n", sizeof(p0));

	printf("Address = %p, value = %d\n", p0, *p0);
	
	return NULL;
}