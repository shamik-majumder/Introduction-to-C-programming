#include <stdio.h>
#include <string.h> // Needed for strcspn
// This program demonstrates how to read a string from user input and remove the trailing newline character.

int main()
{
    char name[50];

    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character
    name[strcspn(name, "\n")] = 0;

    printf("Hello, %s!", name); // Now it prints on the same line

    return 0;
}
