#include <stdio.h>
#include <string.h>

// Write a program to encrypt a string by adding 1 to the ASCII value of its characters.

int main()
{
    char str[] = "Shamik";

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1; // Increment the ASCII value of each character by 1
    }

    printf("%s", str);
    return 0;
}