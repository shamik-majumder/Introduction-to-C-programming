#include <stdio.h>

// Create a three–dimensional array and print the address of its elements in 
// increasing order. 

// 3D array memory address printing

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u\n", &arr[i][j][k]);
            }
        }
        
    }
    
    return 0;
}