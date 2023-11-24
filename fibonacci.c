#include<stdio.h>
int main()
{
    int i,n,x=0,a=1,r;
    r=x+a;
    scanf("%d",&n);
    printf("%d %d ",x,a);
    for(i=3;i<=n;i++)
    {
        printf("%d ",r);
        x=a;
        a=r;
        r=x+a;
    }
}