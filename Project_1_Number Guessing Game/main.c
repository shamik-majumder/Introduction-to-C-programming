// Number Guessing Game in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a number between 1 and 100
    int RandomNumber = (rand() % 100) + 1;
    int no_of_guess = 0;
    int guessed;

    // printf("Random number: %d\n", RandomNumber);

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess what it is?\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        if (guessed > RandomNumber)
        {
            printf("Too high! lower number please and Try again.\n");
        }
        else if (guessed < RandomNumber)
        {
            printf("Too low! higher number please and Try again.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the correct number.\n");
        }

        no_of_guess++;
    } while (guessed != RandomNumber);

    printf("You guessed it! The number was %d\n", RandomNumber);
    printf("You took %d attempts to guess the number.\n", no_of_guess);

    return 0;
}
