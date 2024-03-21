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
    int x;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            x=i;
            break;
        }
    }
    printf("%d",x);
}