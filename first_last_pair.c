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
    int x=(n+1)/2;
    for(i=0;i<x;i++)
    {
        int f=a[i];
        int s=a[n-1-i];
        if(i==x-1 && n%2!=0)
        {
            s=0;
        }
        printf("%d %d ",f,s);
    }
}
