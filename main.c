#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double num1 = atof(argv[1]);
    double num2 = atof(argv[2]);

    printf("Answer: %f\n", num1 + num2);

    return 0;
}