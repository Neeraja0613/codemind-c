#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%[^
]s",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=64 && s[i]<=96)
        {
            c++;
        }
    }
    s[20]=NULL;
    printf("%d",c);
}