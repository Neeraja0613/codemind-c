#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int avg,s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    int f=0;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}