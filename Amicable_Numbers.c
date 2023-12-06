#include<stdio.h>
int main()
{
    int i,n,x,ns=0,xs=0;
    scanf("%d%d",&n,&x);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            ns=ns+i;
        }
    }
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            xs=xs+i;
        }
    }
    if(n==xs && x==ns)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}