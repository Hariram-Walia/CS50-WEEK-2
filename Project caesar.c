#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage ./caesar key \n");
        return 1;
    }
    int key=atoi(argv[1]);

    string plaintext=get_string("Text : ");
    printf("Cyphertext : ");

    for(int i=0,n=strlen(plaintext);i<n; i++)
    {
    char ch = plaintext[i];

    if(isupper(ch))
    {
        char encrypted=((ch-'A' + key)%26)+ 'A';
        printf("%c", encrypted);
    }
    else if(islower(ch))
    {
        char encrypted=((ch-'a' + key)%26)+ 'a';
        printf("%c", encrypted);
    }
    else
    {
        printf("%c", ch);
    }
}
printf("\n");
}
