#include <stdio.h>

// Write a program to determine whether a character entered by the user is 
// lowercase or not.

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is lowercase.\n");
    }
    else
    {
        printf("The character is not lowercase.\n");
    }

    return 0;
}
