#include <stdio.h>

// Write a program to print multiplication table of 10 in reversed order. 

int main()
{
    int n;
    printf(" Enter the number to print its multiplication table in reverse order: ");
    scanf("%d", &n);
    for (int i = 10; i ; i--)
    {

        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}