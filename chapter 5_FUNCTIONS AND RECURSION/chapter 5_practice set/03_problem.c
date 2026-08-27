#include <stdio.h>

// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
// earth. Consider g = 9.8m/s2

float calculate_force(float);

float calculate_force(float force)
{
    return force * 9.8;
}

int main()
{
    float mass;
    printf("enter the value of mass: ");
    scanf("%f", &mass);
    printf("Force of attraction in Newtons: %.2f\n", calculate_force(mass));
    return 0;
}