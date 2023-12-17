#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int computer_score(string word);

int main (void)
{
    string word1 = get_string("player 1: ");
    string word2 = get_string("player 2: ");

    int score1 = computer_score(word1);
    int score2 = computer_score(word2);
    if(score1 > score2)
    {
        printf("player 1 venceu\n");
    }
    else if(score2 > score1)
    {
        printf("player 2 venceu\n");
    }
    else
    {
        printf("empate\n");
    }
}

int computer_score(string word)
{
    int n = strlen(word);
    int ponto = 0;
    for(int f = 0; f < n; f++)
    {
        char aba = word[f];
        if(isalpha(aba))
        {
             char m = 'A';
            if(islower(aba))
            {
                m = 'a';
            }
            int coe = aba - m;
             ponto = ponto + POINTS[coe];

        }
        else
        {

        }
    }
    return(ponto);

}







