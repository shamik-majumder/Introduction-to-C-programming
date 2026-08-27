//Type Conversion in C

#include <stdio.h>
#include <stdbool.h>

int main() {
     bool x = true;
  
    // Automatic type conversion from bool to int
    int y = x;

    // Manual type conversion from bool to int
    bool z = (bool)y;

    printf("x: %d\n", x);
  	printf("y: %d\n", y);
  	printf("z: %d", z);
    return 0;
}