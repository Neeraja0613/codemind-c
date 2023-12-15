#include<stdio.h>
int fac(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int csn(int num)
{
    int d,s=0,t;
    t=num;
    while(t!=0)
    {
        d=t%10;
        s=s+fac(d);
        t=t/10;
    }
    return s==num;
}
int main()
{
    int j,t;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int num;
        scanf("%d",&num);
        if(csn(num))
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}