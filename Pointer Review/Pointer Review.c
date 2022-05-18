#include <stdio.h>

int pointerreview() {
	int a = 5;
	int *b = &a;
	int** c = &b;
	printf("%d\n", **c);
	**c = 6; //Dereferenced
	printf("%d\n", a);
	int ***d = &c;

	printf("%d\n",  *( * (*(d))));
	return 0;
}