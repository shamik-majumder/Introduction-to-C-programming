#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("shamik_1.txt", "r");
    char ch;
    while (1)
    {
        ch = fgetc(fptr); // read a character from file
        printf("%c", ch);
        // when all the content of a file has been read breakthe loop !
        if (ch == EOF) // EOF means End Of File
        {
            break;
        }
    }
    return 0;
}