#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    if(a1+a2+a3>=150 && b1+b2+b3>=150 && c<(2*d))
    {
        printf("YES");
    }
    else if((a1+a2+a3>=150 || b1+b2+b3>=150) && c<d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}