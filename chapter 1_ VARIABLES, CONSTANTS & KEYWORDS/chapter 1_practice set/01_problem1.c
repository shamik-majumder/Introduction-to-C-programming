#include <stdio.h>

// Write a C program to calculate area of a rectangle: 
// a. Using hard coded inputs. 
// b. Using inputs supplied by the user. 

int main(){
//int length = 15; 
//int breadth = 20;
int length , breadth;
printf("Enter the length of the rectangle: \n");
scanf("%d" , &length);
printf("Enter the breadth of the rectangle: \n");
scanf("%d" , &breadth);

printf("the area of this rectangle is %d\n" , length*breadth);

    return 0;
}