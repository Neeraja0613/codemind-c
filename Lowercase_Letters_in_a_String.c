#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%[^
]s",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            c++;
        }
    }
    //s[20]=NULL;
    printf("%d",c);
}