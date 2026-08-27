#include <stdio.h>

int main()
{
    // File pointer to store the
    // value returned by fopen
    FILE *fptr;
    // Opening the file in read mode
    // fptr = fopen("shamik.txt", "r");
    fptr = fopen("shamik_2.txt", "r");

    if (fptr == NULL)
    {
        printf("error 404 ! the file doesn't exist \n");
    }
    else
    {

        int num;
        fscanf(fptr, "%d", &num); // fscanf is file counterpart of scanf
        printf("the value of num is %d\n", num);

        fscanf(fptr, "%d", &num);
        printf("the value of num is %d\n", num);
    }

    fclose(fptr);

    return 0;
}