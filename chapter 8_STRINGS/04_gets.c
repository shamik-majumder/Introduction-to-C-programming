#include <stdio.h>
// The gets() function is used to read a string from the standard input (stdin)
// and store it in the specified character array. It reads characters until a
// newline character is encountered or the end of the file (EOF) is reached.
// The newline character is replaced with a null character ('\0') to terminate the string properly.
// However, it's important to note that gets() is considered unsafe and should
// be avoided in modern C programming due to potential buffer overflow vulnerabilities.
// Instead, it's recommended to use fgets() for safer input handling.
int main()
{
    char str[30];
    gets(str); // The entered string is stored in str

    printf("%s", str);

    // puts(str);  // Prints the string & places the cursor on the next line

    printf(" hi");
    return 0;
}