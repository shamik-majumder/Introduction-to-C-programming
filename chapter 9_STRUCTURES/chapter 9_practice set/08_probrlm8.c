#include <stdio.h>

//  Write a structure capable of storing date. Write a function to compare those 
// dates using ‘typedef’ keyword

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} dt;

int Compare(dt d1, dt d2)
{
    // if d1 is in future return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if ((d1.yyyy > d2.yyyy) || (d1.mm > d2.mm) || (d1.dd > d2.dd))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    dt d1, d2;
    // d1 = {01, 12, 2026};
    d1.mm = 01;
    d1.dd = 12;
    d1.yyyy = 2026;
    // d2 = {01, 05, 2026};
    d2.yyyy = 2026;
    d2.mm = 01;
    d2.dd = 05;
    printf("%d", Compare(d1, d2));

    return 0;
}