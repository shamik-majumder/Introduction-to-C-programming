#include <stdio.h>

// Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.

// Function to slice a string in place
void slice(char str[], int m, int n)
{
    int i = 0;

    // Loop from the starting index 'm' to the ending index 'n'
    for (int j = m; j <= n && str[j] != '\0'; j++)
    {
        str[i] = str[j]; // Shift characters to the front
        i++;
    }

    // Add the null terminator at the end of the new sliced string
    str[i] = '\0';
}

int main()
{
    char str[] = "Shamik Majumder";

    // Call the function to modify the string
    slice(str, 1, 12);

    // Print the modified string
    printf("%s\n", str);

    return 0;
}