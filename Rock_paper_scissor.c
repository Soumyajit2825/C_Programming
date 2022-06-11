#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*Write a c program to play rock,paper,scissor game with computer for 3 times.After three times player or computer whose points will be more he will win.Display both scores and the winner name at the end.*/

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
    // returns 1 if c1>c2 and if c1==c2 then it returns -1 otherwise returns 0
}
int main()
{
    int p1score = 0, compscore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the game Rock,Paper,Scissors\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player 1's turn: \n");
        printf("Choose 1 for Rock,2 for Paper,3 for scissor.\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar);

        printf("Computer's turn: \n");
        printf("Choose 1 for Rock,2 for Paper,3 for scissor.\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer chose %c\n\n", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compscore += 1;
            printf("COMPUTER got it\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            p1score += 1;
            compscore += 1;
            printf("It's a draw.\n");
        }
        else
        {
            p1score += 1;
            printf("You got it\n");
        }
        printf("YOU :%d\n\nCOMPUTER :%d\n\n", p1score, compscore);
    }

    // printf("The random number between 0 to 5 is %d\n", generateRandomNumber(2));

    if (p1score > compscore)
    {
        printf("You win.\n");
    }
    else if (compscore > p1score)
    {
        printf("Sorry.Computer wins.Better luck next time.\n");
    }
    else
    {
        printf("It's a draw.\n");
    }
    return 0;
}