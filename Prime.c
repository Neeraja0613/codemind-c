#include<stdio.h>
int main()
{
    int i,n,x=0;
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}