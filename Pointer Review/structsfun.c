#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int structfun() {

     struct cars
    {
        char make[50];
        char model[30];
        int year;
        bool fast;
        
    } 

    cars;
int whydoesintellisensesuck = sizeof(int);

int *happy = malloc( sizeof(cars));
struct cars test;
strcpy("Hello", test.make);
    printf("%s \n", test.make);

    return 0;
}