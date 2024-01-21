#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    scanf("%[^\n]s",s1);
    scanf(" %[^\n]s",s2);
    int res=strcmp(s1,s2);
    if(res==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}
