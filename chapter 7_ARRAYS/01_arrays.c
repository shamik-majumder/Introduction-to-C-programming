#include <stdio.h>
// program to demonstrate the use of arrays in C
int main()
{
    int marks[90]; // reserve space for 90 integers

    marks[0] = 45;
    marks[1] = 95;
    // total 90 integers can be stored
    //  marks[2] to marks[89] can be used similarly

    printf("Marks of student 1: %d\n", marks[0]);
    printf("Marks of student 2: %d\n", marks[1]);
    return 0;
}