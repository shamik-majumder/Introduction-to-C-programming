#include <stdio.h>
#include <string.h>
// Structures in C
struct employee
{
    int code; // This declares a new user defined data type!
    char name[10];
    float salary;
}; // semicolon is important

int main()
{
    struct employee e1, e2, e3;
    e1.code = 592569;
    strcpy(e1.name, "Shamik");
    e1.salary = 54.50;

    e2.code = 592546;
    strcpy(e2.name, "Amlan");
    e2.salary = 61.35;

    printf("%d %s %.2fLPA\n", e1.code, e1.name, e1.salary);
    printf("%d %s %.2fLPA\n", e2.code, e2.name, e2.salary);

    return 0;
}