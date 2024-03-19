#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,r=0,x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else
        {
            r=r+a[i];
        }
    }
    int b;
    if(s>r)
    {
        b=s-r;
    }
    else
    {
        b=r-s;
    }
    printf("%d",b);
}