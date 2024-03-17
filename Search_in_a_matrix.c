#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x,f=0;
    scanf("%d",&x);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(x==arr[i][j])
            f=1;
        }
    }
    if(f==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}