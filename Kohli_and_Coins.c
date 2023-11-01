#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%10!=0 && x%5==0)
    {
        printf("%d",(x/10)+1);
    }
    else if(x%10==0)
    {
        printf("%d",x/10);
    }
    else
    {
        printf("-1");
    }
}