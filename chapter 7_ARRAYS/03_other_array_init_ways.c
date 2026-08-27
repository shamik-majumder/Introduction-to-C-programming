#include <stdio.h>
// Demonstrates other ways to initialize arrays 
int main()
{
    int cgpa[3] = {8, 9, 9}; // direct array initialization at the time of declaration
    // int cgpa[] = {8, 9, 9}; // array size is automatically determined by the number of initializers
    for (int i = 0; i < 3; i++)
    {
        printf("the cgpa of student %d is %d\n", i + 1, cgpa[i]);
    }
    return 0;
}