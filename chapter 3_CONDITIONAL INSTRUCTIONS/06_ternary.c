#include <stdio.h>

int main()
{
    // condition ? expression-if-true:
    // expression-if-false

    int a = 86;
    int b = 70;
    a > b ? printf("a is greater than b") : printf("b is greater than a");

    return 0;
}