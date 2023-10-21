#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d%d",&x,&y,&z,&a);
    if(x>=10 && y>=10 && z>=10 && a>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}