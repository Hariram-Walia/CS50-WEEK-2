#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
string text=get_string(" Enter Text : ");
int letters = 0;
int words = 1;
int sentence = 0;
for(int i=0; i<strlen(text);i++)
{
    if(isalpha(text[i]))
    letters++;
    else if(text[i]==' ')
    words++;
    else if(text[i]=='.' || text[i]=='!' || text[i]=='?')
    sentence++;
}
float L = (float)letters/words*100;
float S = (float)sentence/words*100;

float index= 0.0588*L-0.296*S-15.8;
int grade = round(index);
{
    if(grade<1)
    {
        printf("Before grade 1 \n" );
    }
    else if(grade>16)
    {
        printf("Above grade 16 \n");
    }
    else
    {
        printf("Grade : %i\n" , grade);
    }
}
}

