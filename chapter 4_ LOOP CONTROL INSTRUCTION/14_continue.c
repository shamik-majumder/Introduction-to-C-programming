#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 7)
        {
            continue; // when i is 7, skip the rest of the loop iteration
        }
        printf(" My value is %d\n", i);
    }
    printf("for loop is done!");

    return 0;
}