#include<stdio.h>
int main()
{
    int n,x,y,a,s,r,sum=0;
    scanf("%d",&n);
    x=n%10;
    while(n>0)
    {
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    y=s%10;
    r=x+y;
    printf("%d",r);
}