#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int myAge = 43;
    printf("%d", myAge); // Outputs 43
    printf("%p\n", &myAge); // Outputs 0x16fa12e08. &myAge is the address of myAge in memory. they are called pointers.


    //pointer variable
    int *agePtr; // * is used to declare a pointer variable. int *agePtr means agePtr is a pointer variable that points to an integer.
    agePtr = &myAge; // & is used to get the address of a variable. &myAge is the address of myAge in memory. agePtr = &myAge means agePtr is assigned the address of myAge.
    printf("%p\n", agePtr); // Outputs 0x16fa12e08. agePtr is the address of myAge in memory.

    return 0;
}

//2 ways to declare a pointer variable
int *agePtr; // * is used to declare a pointer variable. int *agePtr means agePtr is a pointer variable that points to an integer.
int* agePtr; // * is used to declare a pointer variable. int* agePtr means agePtr is a pointer variable that points to an integer.