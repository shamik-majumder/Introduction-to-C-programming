#include <stdio.h>

// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// The vectors must be two–dimensional. 

struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    // struct vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    struct vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;

    return v3;
}

int main()
{
    struct vector v1, v2, v3;
    // v1={1,2};
    v1.i = 1;
    v1.j = 2;
    printf("The value of the vactor1 is %di + %dj\n", v1.i, v1.j);
    // v2={2,3};
    v2.i = 2;
    v2.j = 3;
    printf("The value of the vactor2 is %di + %dj\n", v2.i, v2.j);

    v3 = sumVector(v1, v2);
    printf("The value of the sum of two vactors is %di + %dj\n", v3);

    return 0;
}