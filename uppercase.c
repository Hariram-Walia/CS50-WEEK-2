#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s=get_string("Input : ");
    printf("Output : ");
    for(int i=0,n=strlen(s); i<n ; i++)
    {
    if (s[i] >= 'a' && s[i]<= 'z')
    {
printf("%c", s[i]-('a'-'A'));
// can also write s[i]- 32
    }
    else
    {
        printf("%c", s[i]);
    }
    // it will just print s[i]
    }
    printf("\n");
}
