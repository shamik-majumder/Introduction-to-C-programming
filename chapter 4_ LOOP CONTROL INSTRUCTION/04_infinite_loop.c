#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10) // (2 < 10) is always true
    {
        printf("the value of i is %d\n", i);
        // i++; // Uncommenting this line will prevent the infinite loop
    }
    return 0;
}
