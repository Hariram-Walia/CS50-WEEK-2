#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_score(string word);

int points[]= {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
int main(void)
{
    string n=get_string("Player 1: ");
    string p=get_string("Player 2: ");

    int score1=compute_score(n);
    int score2=compute_score(p);

if(score1>score2)
{
    printf(" Player 1 wins the game with %i points! \n ", score1);
}
else if(score1<score2)
{
    printf(" Player 2 wins the game with %i points! \n " , score2);
}
else
{
    printf("Tie! with %i points each \n ", score1);
}
printf("\n");
}
int compute_score(string word)
{
    int score = 0;
    for(int i=0; i<strlen(word);i++)
    {
        if(isalpha(word[i]))
        {
            int index = toupper(word[i])-'A';
             score += points[index];
        }
    }
    return score;
}
