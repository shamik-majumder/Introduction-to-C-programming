// Continue Inside Nested Loops

#include <stdio.h>

int main()
{

    int i = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // This inner loop will skip when j==2
            if (j == 2)
            {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}