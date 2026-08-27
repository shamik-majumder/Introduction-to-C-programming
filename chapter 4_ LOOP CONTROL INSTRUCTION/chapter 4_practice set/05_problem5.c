#include <stdio.h>

// Write a program to sum first ten natural numbers using while loop.

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf(" The sum of first 10 natural numbers is %d\n", sum);
    return 0;
}