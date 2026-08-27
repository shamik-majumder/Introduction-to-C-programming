// A stone, paper, scissors game, which is capable of playing this game with you

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0 --> Stone
    1 --> Paper
    2 --> Scissors
    */
    printf("Enter 0 for Stone, 1 for Paper, 2 for Scissors: ");
    scanf("%d", &player);

    if (player == 0)
    {
        printf("You chose Stone.\n");
    }
    else if (player == 1)
    {
        printf("You chose Paper.\n");
    }
    else if (player == 2)
    {
        printf("You chose Scissors.\n");
    }
    else
    {
        printf("Invalid choice!\n please choose between 0, 1, and 2 only.\n");
        return 1;
    }
    if (computer == 0)
    {
        printf("Computer chose Stone.\n");
    }
    else if (computer == 1)
    {
        printf("Computer chose Paper.\n");
    }
    else
    {
        printf("Computer chose Scissors.\n");
    }

    if (player == 0 && computer == 0)
    {
        printf("It's a tie!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You lose!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You win!\n");
    }

    else if (player == 1 && computer == 0)
    {
        printf("You win!\n");
    }

    else if (player == 1 && computer == 1)
    {
        printf("It's a tie!\n");
    }

    else if (player == 1 && computer == 2)
    {
        printf("You lose!\n");
    }

    else if (player == 2 && computer == 0)
    {
        printf("You lose!\n");
    }

    else if (player == 2 && computer == 1)
    {
        printf("You win!\n");
    }

    else if (player == 2 && computer == 2)
    {
        printf("You tie!\n");
    }

    return 0;
}