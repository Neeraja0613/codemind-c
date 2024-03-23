#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,max=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }
    if(max)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}