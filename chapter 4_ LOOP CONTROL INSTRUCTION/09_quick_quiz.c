#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter the limit of positive integer: ");
    scanf("%d", &n);
    printf("The first %d natural numbers are:\n", n);

    do
    {
        printf("%d\n", i);
        i++;

    } while (i <= n);

    return 0;
}