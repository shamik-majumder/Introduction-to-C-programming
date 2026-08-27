#include <stdio.h>

// Write a program to print the value of a variable i by using “pointer to pointer” type of variable. 

int main()
{
    int i = 72;
    int *j = &i;
    int **k = &j;
    printf(" the value of i is %d\n", i);
    printf(" the value of i in pointer j is %d\n", *j);
    printf(" the value of i in pointer to pointer k is %d\n", **k);

    return 0;
}