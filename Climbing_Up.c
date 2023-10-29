#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(y==1)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",(x/y)+(x%y));
    }
}