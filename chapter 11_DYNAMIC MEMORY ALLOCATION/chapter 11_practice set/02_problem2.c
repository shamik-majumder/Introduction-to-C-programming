#include <stdio.h>
#include <stdlib.h>

// Write a program to dynamically create an array of size 6 capable of storing 6 
// integers to store 6 integers entered by the use

int main()
{
    int *ptr;
    int n = 6;
    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The integers you entered are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}