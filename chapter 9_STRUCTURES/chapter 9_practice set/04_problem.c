#include <stdio.h>
#include <string.h>

// Write a program to illustrate the use of arrow operator → in C. 

typedef struct employee
{
    int code;
    char name[20];
    float salary;
} emp;

int main()
{
    emp e1;
    emp *ptr = &e1;
    ptr->code = 321456;
    strcpy(ptr->name, "shamik");
    ptr->salary = 12.50;

    printf("the employee detalis is\ncode \tname \tsalary(lpa)\n%d \t%s \t%.2f", e1.code, e1.name, e1.salary);

    return 0;
}