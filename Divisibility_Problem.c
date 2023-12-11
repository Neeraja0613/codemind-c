#include<stdio.h>
int main()
{
    int n,x,r,a,k;
    scanf("%d%d",&n,&x);
    if(n%x!=0)
    {
        r=n/x;
        k=(r+1)*x;
        a=k-n;
        printf("%d",a);
    }
    else
    {
        printf("0");
    }
}