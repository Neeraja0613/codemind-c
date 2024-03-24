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
    int f=1;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2!=0)
        {
            f=0;
        }
    }
    if(f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
