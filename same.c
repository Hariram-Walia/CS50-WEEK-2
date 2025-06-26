#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name= get_string("Input: ");
    printf("Output: ");
    int n = strlen(name);
    for (int i=0;  i < n ; i++)
    {
         printf("%c", name[i]);
    }
    printf("\n");

}
