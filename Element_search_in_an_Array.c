#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            f=1;
            break;
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