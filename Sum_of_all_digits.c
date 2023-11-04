#include<stdio.h>
int main()
{
    int i,n,r,ds=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        ds=ds+r;
    }
    printf("%d",ds);
}