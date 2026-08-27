#include <stdio.h>

int main(){
    if(1){
        printf("this if is executed\n");
    }
    if(0){
        printf("hi i'm zero so, this if is surely not executed\n");
    }
    if(5683){
        printf("this if is also executed\n");
    }
    if(27.23){
        printf("this if is also executed\n");
    }
    if('c'){
       printf("this if is seriously executed\n");
    }
    return 0;
} 