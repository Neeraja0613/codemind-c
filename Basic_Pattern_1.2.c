#include<stdio.h>
int main()
{
    int i,r,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(r=1;r<=n;r++)
        {
            printf("%d ",r);
        }
        printf("
");
    }
}