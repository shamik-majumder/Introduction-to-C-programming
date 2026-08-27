#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("shamik.txt", "r");
    int num;
    fscanf(fptr, "%d", &num); // fscanf is file counterpart of scanf
    printf("the value of num is %d\n", num);

    //fscanf(fptr, "%d", &num);
    //printf("the value of num is %d\n", num);

    fclose(fptr);

    return 0;
}