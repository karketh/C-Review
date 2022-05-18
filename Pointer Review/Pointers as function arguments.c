#include <stdio.h>

int pointarg() {
	int a;
	a = 10;
	increment(a);
	printf("%p\n", &a); //Different from increment function
	


	return NULL;
}

int increment (int a) {
	a = a + 1;
	printf("%p\n", &a); //Different from main
	return a;
}
