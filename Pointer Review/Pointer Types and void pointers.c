#include <stdio.h>

int types() {
	int a = 1025;
	int *p = &a;
	


	printf("Size of integer is: %d\n", sizeof(p));

	printf("Address = %p, value = %d\n", p, *p);
	
	void *p0;
	p0 = p;
	printf("%d", p0);


	return NULL;
}