// Break Inside Nested Loops

#include <stdio.h>

int main()
{

    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // This inner loop will break when i==3
            if (i == 3)
            {
                break;
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}