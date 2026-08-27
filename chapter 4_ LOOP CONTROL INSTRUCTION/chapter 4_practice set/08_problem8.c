#include <stdio.h>

// Write a program to calculate the factorial of a given number using a for loop.

// 3! = 1 x 2 x 3 = 6
// 4! = 1 x 2 x 3 x 4 = 24
// 5! = 1 x 2 x 3 x 4 x 5 = 120
// n! = 1 x 2 x 3 x ....... (n-2) x (n-1) x n

int main()
{
    int n, fact = 1;
    printf(" enter the number to find its factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf(" the factorial is %d\n", fact);

    return 0;
}