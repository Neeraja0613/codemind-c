#include<stdio.h>
int main()
{
    int n,t,s=0,p=1,d;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        d=t%10;
        s=s+d;
        p=p*d;
        t=t/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}