#include<stdio.h>
int main()
{
    int i,a,b,x;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        x=i*a;
        if(x%b==0)
        {
            printf("%d",x);
            break;
        }
    }
}