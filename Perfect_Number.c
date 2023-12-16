#include<stdio.h>
int main()
{
    int i,n,r,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}