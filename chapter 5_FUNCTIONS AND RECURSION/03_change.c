#include <stdio.h>

int change(int);

int change(int a)
{
    a = 77; // Misnomered function name

    return 0;
}

int main()
{
    int b = 22; // The value of b remains 22
    change(b);
    printf("b is %d", b); // Prints "b is 22"

    return 0;
}