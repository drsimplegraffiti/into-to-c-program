#### C Programming

Setup:

You need:

- a C compiler. I use gcc. (https://gcc.gnu.org/), If you are on mac, probably you have it already. check with `gcc --version`. GCC: GNU Compiler Collection.
- for windows, you can use https://www.codeblocks.org/
- an editor. I use vscode. (https://code.visualstudio.com/), you can use any editor you like.
- Download the c/c++ extension for vscode.

### Hello World

create a file called main.c and write the following code in it.

```c
#include <stdio.h> // this is a header file. It contains the declaration of printf function.


int main(void)
{
    int age = 90;
    printf("%d\n", age);

    char initial = 'D';
    printf("%c\n", initial);

    float fp = 45.90;
    printf("%f\n", fp);

    double d = 45.90;
    printf("%f\n", d);


    printf("hello world\n");

     const int NUM = 5;
    printf("%i\n", NUM);

    return 0;
}
```

To compile the code, run the following command in the terminal.

```bash
gcc main.c
```

this will create a file called a.out. To run the program, run the following command in the terminal.

```bash
./a.out
```

or
Rename the output file to main and run the following command in the terminal.

```bash
gcc main.c -o main
```


#### Reading Input

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num;

    printf("what is your age? ");

    scanf("%i", &num); //&num is the address of num variable in memory
    printf("You are %i years old\n", num);
    printf("%i\n", num);

    const int NUM = 5;
    printf("%i\n", NUM);

    return 0;
}
```

Example 2
```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num;

    printf("what is your age? \n");

    scanf("%i", &num);

    if (num < 18)
    {
        printf("you are underaged\n");
    }
    else
    {
        printf("you are good to go\n");
    }

    return 0;
}
```

#### If Else

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num;

    printf("what is your age? \n");

    scanf("%i", &num);

    if (num < 18)
    {
        printf("you are underaged\n");
    }
    else if (num == 18)
    {
        printf("you are 18\n");
    }
    else
    {
        printf("you are good to go\n");
    }

    return 0;
}
```


#### Switch

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num;

    printf("what is your age? \n");

    scanf("%i", &num);

    switch (num)
    {
    case 18:
        printf("you are 18\n");
        break;
    case 19:
        printf("you are 19\n");
        break;
    case 20:
        printf("you are 20\n");
        break;
    default:
        printf("you are not 18, 19 or 20\n");
        break;
    }

    return 0;
}
```


#### Ternary Operator

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num;

    printf("what is your age? \n");

    scanf("%i", &num);

    num < 18 ? printf("you are underaged\n") : printf("you are good to go\n");

    return 0;
}
```


#### While Loop

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num = 0;

    while (num < 10)
    {
        printf("%i\n", num);
        num++;
    }

    return 0;
}
```


#### Do While Loop

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num = 0;

    do
    {
        printf("%i\n", num);
        num++;
    } while (num < 10);

    return 0;
}
```

#### For Loop

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
    }

    return 0;
}
```

#### Strings
strings are arrays of characters. i.e char[]

old way of declaring strings with null terminator
```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num = 0;

    char name[20] = {'d', 'a', 'v', 'e', '\0'}; // \0 is the null terminator, 20 elements in array
    printf("%lu\n", sizeof(name)); // 20 bytes i.e d is 1 byte, a is 1 byte, v is 1 byte, e is 1 byte, \0 is 1 byte, 15 bytes of garbage
    int length = sizeof(name) / sizeof(name[0]);
    printf("%s\n", name);

    return 0;
}
```


Using string literal
```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int num = 0;

    char name[20] = "dave"; // or use char name[] = "dave"; // 20 elements in array
    printf("%s\n", name);

    return 0;
}
```

#### String Functions

```c
#include <string.h>
```

#### Arrays

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int nums[3] = {1, 2, 3};

    // array of strings
    char *names[3] = {"dave", "john", "doe"};

    printf("%i\n", nums[0]);
    printf("%i\n", nums[1]);
    printf("%i\n", nums[2]);

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);

    return 0;
}
```

#### Ommiting Array Size

```c
#include <stdio.h>

int main(void)
{
    // reading user input
    int nums[] = {1, 2, 3}; // size is 3 because we have 3 elements, the compiler will figure it out.

    // array of strings
    char *names[] = {"dave", "john", "doe"};

    printf("%i\n", nums[0]);
    printf("%i\n", nums[1]);
    printf("%i\n", nums[2]);

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);

    return 0;
}
```

#### Size of Array

```c
#include <stdio.h>

int main(void)
{
    int grades[] = {50, 75, 100, 67, 90}; // each int is 4 bytes, i.e 4 x 5 elements in the array

    // calculate the size of the array
    int array_size = sizeof(grades);

    printf("Size of array: %i bytes\n", array_size);
    printf("size of bytes in each element: %lu bytes\n", sizeof(grades[0]));

    // calculate the number of elements in the array
    int element_size = sizeof(grades[0]);

    int length = array_size / element_size;
    printf("Number of elements in array: %i\n", length);

    // reassigning values in the array
    grades[1] = 52;
    grades[2] = 78;
    printf("Grades[1]: %i\n", grades[1]);

}
```


#### Loops and Arrays

```c
#include <stdio.h>

int main(void)
{
    int grades[] = {50, 75, 100, 67, 90}; // each int is 4 bytes, i.e 4 x 5 elements in the array


    for (int i = 0; i < 5; i++)
    {
        printf("Grade %i: %i\n", i + 1, grades[i]);
    }

    printf("\n");

    //array of strings
    char *names[] = {"David", "Michael", "Sarah", "John"};
    int length = sizeof(names) / sizeof(names[0]); // 4 x 8 bytes = 32 bytes / 8 bytes = 4 elements in the array
    printf("size of names: %lu\n", sizeof(names));
    printf("size of names[0]: %lu\n", sizeof(names[0]));

    for (int i = 0; i < length; i++)
    {
        printf("Name %i: %s\n", i + 1, names[i]);
    }
    
    

}
```


#### Functions

```c
#include <stdio.h>

// function prototype
void sayHi(void);

int main(void)
{
    sayHi();
    return 0;
}

// function definition
void sayHi(void)
{
    printf("Hi\n");
}
```

#### Function Parameters

```c
#include <stdio.h>

// function prototype
void sayHi(char name[]);

int main(void)
{
    sayHi("dave");
    return 0;
}

// function definition
void sayHi(char name[])
{
    printf("Hi %s\n", name);
}
```


#### Function Return Values

```c
#include <stdio.h>

// function prototype
int add(int num1, int num2);

int main(void)
{
    int sum = add(5, 10);
    printf("%i\n", sum);
    return 0;
}

// function definition
int add(int num1, int num2)
{
    return num1 + num2;
}
```


#### Pointers

Pointers are variables that store the address of other variables.

```c
#include <stdio.h>

int main(void)
{
    int age = 30;
    int *pAge = &age; // &age is the address of age variable in memory

    double gpa = 3.4;
    double *pGpa = &gpa;

    char grade = 'A';
    char *pGrade = &grade;

    printf("age: %p\n", pAge);
    printf("gpa: %p\n", pGpa);
    printf("grade: %p\n", pGrade);

    return 0;
}
```


#### Dereferencing Pointers

```c
#include <stdio.h>

int main(void)
{
    int age = 30;
    int *pAge = &age; // &age is the address of age variable in memory

    double gpa = 3.4;
    double *pGpa = &gpa;

    char grade = 'A';
    char *pGrade = &grade;

    printf("age: %p\n", pAge);
    printf("gpa: %p\n", pGpa);
    printf("grade: %p\n", pGrade);

    printf("age: %d\n", *pAge);
    printf("gpa: %f\n", *pGpa);
    printf("grade: %c\n", *pGrade);

    return 0;
}
```


#### Null Pointers

```c
#include <stdio.h>

int main(void)
{
    int *pAge = NULL; // NULL is a macro that sets the pointer to point to nothing

    printf("%p\n", pAge);

    return 0;
}
```


#### Pointers and Arrays

```c
#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    printf("%p\n", nums); // nums is a pointer to the first element in the array
    printf("%d\n", *nums); // dereference the pointer to get the value of the first element in the array

    int *pNums = nums; // pNums is a pointer to the first element in the array
    printf("%p\n", pNums);
    printf("%d\n", *pNums);

    printf("%d\n", *(pNums + 1)); // get the value of the second element in the array

    return 0;
}
```

#### Incrementing Pointers

```c
#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    printf("%p\n", nums); // nums is a pointer to the first element in the array
    printf("%d\n", *nums); // dereference the pointer to get the value of the first element in the array

    int *pNums = nums; // pNums is a pointer to the first element in the array
    printf("%p\n", pNums);
    printf("%d\n", *pNums);

    printf("%d\n", *(pNums + 1)); // get the value of the second element in the array

    pNums++; // increment the pointer to point to the next element in the array
    printf("%d\n", *pNums);

    return 0;
}
```

#### Decrementing Pointers

```c
#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    printf("%p\n", nums); // nums is a pointer to the first element in the array
    printf("%d\n", *nums); // dereference the pointer to get the value of the first element in the array

    int *pNums = nums; // pNums is a pointer to the first element in the array
    printf("%p\n", pNums);
    printf("%d\n", *pNums);

    printf("%d\n", *(pNums + 1)); // get the value of the second element in the array

    pNums++; // increment the pointer to point to the next element in the array
    printf("%d\n", *pNums);

    pNums--; // decrement the pointer to point to the previous element in the array
    printf("%d\n", *pNums);

    return 0;
}
```


#### Pointer Arithmetic

```c
#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    printf("%p\n", nums); // nums is a pointer to the first element in the array
    printf("%d\n", *nums); // dereference the pointer to get the value of the first element in the array

    int *pNums = nums; // pNums is a pointer to the first element in the array
    printf("%p\n", pNums);
    printf("%d\n", *pNums);

    printf("%d\n", *(pNums + 1)); // get the value of the second element in the array

    pNums++; // increment the pointer to point to the next element in the array
    printf("%d\n", *pNums);

    pNums--; // decrement the pointer to point to the previous element in the array
    printf("%d\n", *pNums);

    pNums += 2; // increment the pointer to point to the next element in the array
    printf("%d\n", *pNums);

    pNums -= 2; // decrement the pointer to point to the previous element in the array
    printf("%d\n", *pNums);

    return 0;
}
```


