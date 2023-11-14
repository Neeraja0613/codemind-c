#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(r=0;r<n-i;r++)
        {
            printf("%d ",r+1);
        }
        printf("
");
    }
}