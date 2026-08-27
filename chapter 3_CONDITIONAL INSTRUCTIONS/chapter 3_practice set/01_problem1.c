#include <stdio.h>

// What will be the output of this program 
// int a = 10; 
// if (a = 11) 
// printf("I am 11"); 
// else  
// printf("I am not 11"); 

int main()
{
    int a = 10;
    if (a = 11)  //if (a == 11)  then output would be "I am not 11"
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}