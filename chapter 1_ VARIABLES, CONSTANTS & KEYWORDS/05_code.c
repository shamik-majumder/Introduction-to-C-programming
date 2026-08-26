//C Variable Initialization

#include <stdio.h>

int main()
{
    // 1. Initialization at the time of declaration
    int age = 20;
    float height = 5.7;

    // 2. Initialization after declaration
    char grade;
    grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}