#include <stdio.h>

int main()
{
    int age = 25;
    
    if (age < 18)
    {
        printf("you are not eligible for the job");
    }
    else if (age > 32)
    {
        printf("yuou are not eligible for the job");
    }
    else
    {
        printf("you are eligible for the job");
    }
    return 0;
}