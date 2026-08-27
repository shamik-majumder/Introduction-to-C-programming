#include <stdio.h>

/*
Quick Quiz : write a program to find grade of a student given his marks
based on below:
    90-100 => A
    80-90 => B
    70-80 => C
    60-70 => D
    50-60 => E
    <50 => F
*/

int main()
{

    char grade;
    int marks = 86;
    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
        printf("Grade is: %c\n", grade);
    }
    else if (marks <= 90 && marks >= 80)
    {
        grade = 'B';
        printf("Grade is: %c\n", grade);
    }
    else if (marks <= 80 && marks >= 70)
    {
        grade = 'C';
        printf("Grade is: %c\n", grade);
    }
    else if (marks <= 70 && marks >= 60)
    {
        grade = 'D';
        printf("Grade is: %c\n", grade);
    }
    else if (marks <= 60 && marks >= 40)
    {
        grade = 'E';
        printf("Grade is: %c\n", grade);
    }
    else
    {
        grade = 'F';
        printf("Grade is: %c\n", grade);
    }

    return 0;
}