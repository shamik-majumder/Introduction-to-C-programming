#include <stdio.h>

// Create a two-dimensional vector using structures in C. 

struct vector
{
    int i;
    int j;
    int k;
};

int main()
{
    struct vector v = {1, 2, 3};
    printf("The value of the vactor is %di + %dj + %dk\n", v.i, v.j, v.k);

    return 0;
}