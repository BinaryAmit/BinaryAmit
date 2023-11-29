#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomNo()
{
    srand(time(NULL));
    int no = rand() % 6;
    return no;
}
void playGame()
{
    int no = randomNo();
    int guessedNo;
    int correct = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Turns left : %d\n", 3 - i);

        printf("Guess a Number (0-5) \n");
        scanf("%d", &guessedNo);

        if (guessedNo == no)
        {

            printf("Congrats! Corrrect guess\n");
            correct++;
            break;
        }
        else
        {
            printf("Oops! Try again\n");
            printf("\n");
        }
    }

    if (correct == 1)
    {
        printf("Well Played\n");
    }
    else
    {
        printf("Better Luck next time\n");
    }
}

int main()
{
    int choice;
    do
    {
        playGame();
        printf("Do you want to play again ? :\n");
        printf("Press 0 to quit , 1 to play again\n");

        scanf("%d", &choice);
        printf("Lets Play again-->\n");

    } while (choice == 1);
    printf("Thanks for playing with us...\n");

    return 0;
}