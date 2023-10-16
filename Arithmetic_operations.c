#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro,divi,mod;
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    divi=a/b;
    mod=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",sum,diff,pro,divi,mod);
}