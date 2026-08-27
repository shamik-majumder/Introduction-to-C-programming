#include <stdio.h>
#include <string.h>

// Write a program to decrypt the string encrypted using encrypt function in problem 6

int main()
{
    char str[] = "Tibnjl";

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1; // Decrement the ASCII value of each character by 1 to decrypt
    }
    
    printf("%s", str);
    return 0;
}