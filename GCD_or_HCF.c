#include<stdio.h>
int main()
{
    int n1,n2,r,n,d,gcd;
    scanf("%d%d",&n1,&n2);
    n=(n1>n2)?n1:n2;
    d=(n1<n2)?n1:n2;
    r=n%d;
    while(r!=0)
    {
        n=d;
        d=r;
        r=n%d;
    }
    gcd=d;
    printf("%d",gcd);
}