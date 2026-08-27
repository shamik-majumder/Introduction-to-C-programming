#include <stdio.h>

int main()
{
    char i = 'A';
    char* j = &i; // j is a pointer to a character and it stores the address of i
    
    float k = 5.232;
    float* l = &k; // l is a pointer to a float and it stores the address of k

    printf(" the address of i is %p\n", &i); //&i gives the address of i
    printf(" the address of j is %p\n", j); //&j gives the address of j
    printf(" the address of k is %p\n", &k); //&k gives the address of k
    printf(" the address of l is %p\n", l); //&l gives the address of l
    return 0;
}