#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    for(t=1;t<=1;t++)
    {
        float i,a,b,s=0,r;
        scanf("%f%f",&a,&b);
        for(i=a;i<=b;i++)
        {
            r=sqrt(i);
            s=s+r;
        }
        printf("%.2f",s);
    }
}