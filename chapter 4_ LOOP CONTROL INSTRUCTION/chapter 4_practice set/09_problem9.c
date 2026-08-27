#include <stdio.h>

// Write a program to calculate the factorial of a given number using while loop.

int main()
{
    int i = 1, n, fact = 1;
    printf(" enter the number to find its factorial: ");
    scanf("%d", &n);
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf(" the factorial is %d\n", fact);

    return 0;
}