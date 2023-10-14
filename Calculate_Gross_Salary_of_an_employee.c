#include<stdio.h>
int main()
{
    float sal,hra,da,pf,gross;
    scanf("%f%f%f",&sal,&hra,&da);
    pf=0.12*sal;
    gross=sal+hra+da+pf;
    printf("%.2f
%.2f",pf,gross);
}