#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition int sum(int x, int y)
int sum(int x, int y)
{
    // printf("The sum of %d and %d is %d\n", x , y, x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;

    int c = sum(a, b);  //fuction call
    printf("The sum of %d and %d is %d\n", a, b, c);
    // int c = a + b;
    // printf("The sum of %d and %d is %d\n", a, b, c);

    int a1 = 5;
    int b1 = 10;

    int c1 = sum(a1, b1); //fuction call
    printf("The sum of %d and %d is %d\n", a1, b1, c1);
    // int c1 = a1 + b1;
    // printf("The sum of %d and %d is %d\n", a1, b1, c1);

    int a2 = 20;
    int b2 = 30;

    int c2 = sum(a2, b2); //fuction call
    printf("The sum of %d and %d is %d\n", a2, b2, c2);
    // int c2 = a2 + b2;
    // printf("The sum of %d and %d is %d\n", a2, b2, c2);

    return 0;
}