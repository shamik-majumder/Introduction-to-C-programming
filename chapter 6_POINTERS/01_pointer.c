#include <stdio.h>

int main()
{
    int i = 72;
    int* j = &i; // j is a pointer to an integer and it stores the address of i
    int k = *j;  // k is assigned the value at the address stored in j, which is the value of i

    // & is the address-of operator
    printf(" the address of i id %p\n", &i); //&i gives the address of i
    printf(" the address of i id %p\n", j);  // %p is address format specifier for printing pointer addresses
    printf(" the address of j id %p\n", &j);  //&j gives the address of j
    printf(" the address of k id %p\n", &k); //&k gives the address of k

    printf(" the address of i id %u\n", &i); //%u is used to print unsigned int values
    printf(" the address of i id %u\n", j);
    printf(" the address of k is %u\n", &k);

    // * is the value-at-address operator (dereferencing operator)
    // int *j means declare j as a pointer to an integer
    printf(" the value of i is %d\n", i);
    printf(" the value at address j is %d\n", *(&i)); // *(&i) dereferences the address of i to get its value
    printf(" the value of address j is %d\n", *(&j)); // *(&j) dereferences the address of j to get the value stored in j, which is the address of i
    printf(" the value at address j is %d\n", *j);    // *j dereferences j to get the value of i
    printf(" the value of k is %d\n", k);             // k holds the value of i

    return 0;
}