#include<stdio.h>
int main()
{
    int h,m,x,y;
    scanf("%d%d",&h,&m);
    x=(23-h)*60;
    y=60-m;
    printf("%d",x+y);
}