#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n/4;
    if(n%4!=0)
    {
        printf("%d",x+1);
    }
    else
    {
        printf("%d",x);
    }
}