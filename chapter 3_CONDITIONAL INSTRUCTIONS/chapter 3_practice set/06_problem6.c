#include <stdio.h>

//  Write a program to find greatest of four numbers

int main(){
    int a=6  , b=8 , c=24  , d=36;
    if(a>b && a>c && a>d){
        printf("A is the greatest of all");
    }
    else if(b>a && b>c && b>d){
        printf("B is the greatest of all");
    }
    else if(c>a && c>b && c>d){
        printf("C is the greatest of all");
    }
    else if(d>a && d>b && d>c){
        printf("D is the greatest of all");
    }
    
    return 0;
}