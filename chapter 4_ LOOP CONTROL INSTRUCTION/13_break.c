#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf(" My value is %d\n", i);
        if (i == 7)
        {
            break; // when i is 7, the loop will terminate
        }
    }
    printf("for loop is done!");

    return 0;
}