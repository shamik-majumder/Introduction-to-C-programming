#include <stdio.h>

// Write a function to convert Celsius temperature into Fahrenheit. 

float covert(float);

float covert(float celsius)
{
    return ((celsius * 9) / 5) + 32;
}

int main()
{
    printf("Temperature in Fahrenheit: %.2f\n", covert(37.0));
    return 0;
}