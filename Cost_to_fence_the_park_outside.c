#include<stdio.h>
int main()
{
    int l,b,h,c,a,cost;
    scanf("%d%d%d%d",&l,&b,&h,&c);
    a=(2*l*h)+(2*b*h)+(4*h*h);
    cost=a*c;
    printf("%d",cost);
}