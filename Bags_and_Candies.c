#include<stdio.h>
int main()
{
    int n,k,m,b;
    scanf("%d%d%d",&n,&k,&m);
    b=(n+(k*m)-1)/(k*m);
    printf("%d",b);
}