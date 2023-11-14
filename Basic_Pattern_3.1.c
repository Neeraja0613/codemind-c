#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(r=1;r<=n-i+1;r++)
        {
            printf("* ");
        }
        printf("
");
    }
}