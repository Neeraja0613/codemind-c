#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s[c]={0};
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[j]=s[j]+a[i][j];
        }
    }
    for(j=0;j<c;j++)
    {
        printf("%d ",s[j]);
    }
}
