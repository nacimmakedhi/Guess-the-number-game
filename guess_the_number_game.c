#include <stdio.h>

int main()
{
    int num, guess, tries = 0;
    srand(time(0)); /* seed random number generator */
    num = rand() % 100 + 1; /* random number between 1 and 100 */

    printf("Jeu <Guess My Number>\n\n");

    do
    {
        printf("Entre un chiffre de 1 à 100 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nBravooo! You got it in %d guesses!\n", tries);
        }

    }while (guess != num);

    return 0;
}
