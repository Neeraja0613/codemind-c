#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%2!=0 && y%2!=0)
    {
        printf("Player 2");
    }
    else
    {
        printf("Player 1");
    }
}