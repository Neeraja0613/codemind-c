#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}