#include <stdio.h>
#include <string.h>

int main(void)
{
    // reading user input
    int num = 0;

    char name[20] = "dave"; // or use char name[] = "dave"; // 20 elements in array
    printf("%s\n", name);

    // string functions
    int length = strlen(name);
    printf("length of name: %i\n", length);

    return 0;
}