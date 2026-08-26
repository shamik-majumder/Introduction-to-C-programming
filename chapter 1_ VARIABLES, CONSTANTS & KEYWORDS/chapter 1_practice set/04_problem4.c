#include <stdio.h>

// Write a program to calculate simple interest for a set of values representing      
// principal, number of years and rate of interest.

int main(){
    int p = 1200;
    float r = 0.06;
    int t = 2;

    float Simple_Interest = (p*r*t)/100;

    printf("the value in simple interest is %f" , Simple_Interest);

    return 0;
}