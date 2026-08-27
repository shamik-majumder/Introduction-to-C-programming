// switch Statement in C

#include <stdio.h>

int main()
{

    // variable to be used in switch statement
    int day;
    printf("Enter the number of the dayin a week: \n");
    scanf("%d", &day);

    // declaring switch cases
    switch (day)
    {
    case (1):
        printf("this is Monday");
        break;
    case (2):
        printf("this is Tuesday");  
        break;
    case (3):
        printf("this is Wednesday");
        break;
    case (4):
        printf("this is Thursday");
        break;
    case (5):
        printf("this is Friday");
        break;
    case (6):
        printf("this is Saturday"); 
        break;
    case (7):
        printf("this is Sunday");
        break;
    }

    return 0;
}