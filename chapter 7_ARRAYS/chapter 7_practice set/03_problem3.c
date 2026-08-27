#include <stdio.h>

// Write a program to create an array of 10 integers and store multiplication table of 5 in it. 

int main()
{
    int multi[10];
    for (int i = 0; i < 10; i++)
    {
        multi[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of 5 X %d is %d\n", i + 1, multi[i]);
    }
    printf("\n");
    return 0;
}