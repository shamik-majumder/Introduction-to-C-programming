#include <stdio.h>
// program to show how arrays are stored in memory
int main()
{
    int marks[5];

    printf("enter marks of 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the address of marks at index %d is %u\n", i, &marks[i]);
    }
    // defference is 4 bytes because int is 4 bytes
    return 0;
}