#include<stdio.h>
int main()
{
    int n,k,x,y,a,b;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    a=((n-k)*y)+(k*x);
    b=((n-k)*x)+(k*x);
    if(x>y)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}