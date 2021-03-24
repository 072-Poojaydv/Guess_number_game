#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	system("cls");
    int number, a, i = 5;
    srand(time(0));
    number = rand() % 100;
	printf("\n\t\t\t********************WELCOME TO THE GAME****************\n");
	printf("\n******\tYOU NEED TO ENTER A  NUMBER OF YOUR GUESS AND THEN PROCEED FUTHER ACCORDING TO THE INSTRUCTION:::******\n");

    printf("\t\t\tEnter a number : ");
    scanf("%d", &a);

    while (i--)
    {
        if (a > number)
        {
            printf("\t\t\tGuess little less :");
            scanf("%d", &a);
        }
        else if (a < number)
        {
            printf("\t\t\tGuess little high :");
            scanf("%d", &a);
        }
        else
        {
            printf("\t\t\tCongratulations!! right guess\n");
            printf("\t\t\tYou took %d steps to guess\n", 6 - i);
            break;
        }
    }
    if (i == -1)
        printf("You lost\n");

    return 0;
}