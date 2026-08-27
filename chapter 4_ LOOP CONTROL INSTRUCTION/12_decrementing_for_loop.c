#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The first %d natural numbers in reverse order are:\n", n);
    for (int i = n; i ; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}