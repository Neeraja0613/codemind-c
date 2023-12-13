#include<stdio.h>
int cod(int num)
{
    int i,c=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c=c+1;
        }
    }
    return c;
}
void cnf(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(cod(i)==9)
        {
            printf("%d ",i);
            c=c+1;
        }
    }
    printf("
Total=%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    //printf("%d");
    cnf(n);
    return 0;
}