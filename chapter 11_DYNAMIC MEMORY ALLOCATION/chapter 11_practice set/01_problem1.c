#include <stdio.h>
#include <stdlib.h>

// Write a program to dynamically create an array of size 6 capable of storing 6 
// integers.

int main()
{
    int *ptr;
    int n = 6;
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    ptr[5] = 60;

    printf("The %d integers are:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}