#include<stdio.h>
int main()
{
    float x,y,p;
    scanf("%f%f",&x,&y);
    p=((y-x)/x)*100;
    printf("%.2f",p);
}