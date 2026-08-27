#include <stdio.h>

// Write a program to take string as an input from the user using %c and %s confirm 
// that the strings are equal. 

int main()
{
    char str[7];

    // scanf("%s", str);

    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); //fflush(stdin) the input buffer to avoid reading the newline character
    }
    str[6] = '\0';

    printf("%s", str);
    



    return 0;
}