#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,a,d;
    scanf("%d",&n);
    x=n*(n+1)*(2*n+1)/6;
    a=n*(n+1)/2;
    y=pow(a,2);
    d=y-x;
    printf("%d",d);
}