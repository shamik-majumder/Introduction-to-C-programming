#include <stdio.h>

// Write a program to check whether a given number is prime or not using for loops. 

int main()
{
    int n;
    int prime = 0;
    printf(" enter the number to check whether it is prime or not: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
        }
    }
    if (prime)
    {
        printf(" the number is not a prime\n");
    }
    else
    {
        printf(" the number is a prime\n");
    }
    return 0;
}