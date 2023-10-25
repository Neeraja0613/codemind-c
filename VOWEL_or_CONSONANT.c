#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if('A'==x || 'E'==x || 'I'==x || 'O'==x || 'U'==x)
    {
        printf("VOWEL");
    }
    else if('a'==x || 'e'==x || 'i'==x || 'o'==x || 'u'==x)
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}