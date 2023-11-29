#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    for(t=1;t<=1;t++)
    {
        int i,a,b,s,c;
        scanf("%d%d",&a,&b);
        for(i=a+1;i<b;i++)
        {
            s=pow(i,2);
            c=pow(i,3);
            printf("%d %d %d
",i,s,c);
        }
    }
}