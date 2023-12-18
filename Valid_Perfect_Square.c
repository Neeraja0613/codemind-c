#include<stdio.h>
#include<math.h>
int main()
{
    int j,t;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int n,x;
        float y;
        scanf("%d",&n);
        y=sqrt((double)n);
        x=y;
        if(x==y)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}