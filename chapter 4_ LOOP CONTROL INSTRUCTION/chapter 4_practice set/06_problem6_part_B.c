#include <stdio.h>

//  Write a program to sum first ten natural numbers using ‘for’ loop.

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("the sum of first n natural numbers is %d\n", sum);

    return 0;
}