#include<stdio.h>
int main()
{
    float bs,da,hra,gross;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=bs*0.80;
        hra=bs*0.20;
    }
    else if(bs<=20000)
    {
        da=bs*0.90;
        hra=bs*0.25;
    }
    else
    {
        da=bs*0.95;
        hra=bs*0.30;
    }
    gross=bs+da+hra;
    printf("%.2f",gross);
}
