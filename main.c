#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generate a random number
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21;

    // Initialize state of game
    _Bool guessCorrect = 0;
    int tries = 5;
    int playerGuess;

    // Welcome player to the game
    printf("This is a guessing game. Guess a random number between 0 and 20\n\n");

    // Start game loop
    while (guessCorrect == 0)
    {

        // if the player has tries left, continue the game
        if (tries > 0)
        {
            printf("\nYou have %d tries left\n", tries);

            // get input from player
            printf("Enter a guess: ");
            scanf("%d", &playerGuess);

            // check if player guessed correctly, if so end the game
            if (playerGuess == randomNumber)
            {
                printf("\nCongratulations. You guessed it!\n");
                break;

                // if player's guess is incorrect, check if player's guess is higher or lower than the randomNumber
            }
            else
            {

                // check if player guess is higher
                if (randomNumber > playerGuess)
                {
                    printf("Sorry, %d is wrong. My number is higher than your guess\n", playerGuess);

                    // check if player guess is lower
                }
                else
                {
                    printf("Sorry, %d is wrong. My number is lower than your guess\n", playerGuess);
                }
            }

            // decrease amount of tries if player guessed incorrectly
            tries--;
        }
        else
        {
            printf("\nYou lose! You failed to guess the number within 5 tries.\n");
            break;
        }
    }

    return 0;
}
