#include<stdio.h>
int main()
{
    int j,t;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int i,n,x,r,s=0;
        scanf("%d%d",&n,&x);
        for(i=n;i<=x;i++)
        {
            r=i%10;
            if(r==2 || r==3 || r==9)
            {
                s++;
            }
        }
        printf("%d
",s);
    }
}