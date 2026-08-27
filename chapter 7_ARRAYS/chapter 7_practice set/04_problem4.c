#include <stdio.h>

// Write a program to create an array of 10 integers and store multiplication table
// for a general input provided by the user using scanf.

int main()
{
    int n;
    int multi[10];
    printf(" enter the number to generate the table for: \n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        multi[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d X %d is %d\n", n, i + 1, multi[i]);
    }
    printf("\n");
    return 0;
}