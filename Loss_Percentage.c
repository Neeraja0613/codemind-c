#include<stdio.h>
int main()
{
    float x,y,l;
    scanf("%f%f",&x,&y);
    l=((x-y)/x)*100;
    printf("%.2f",l);
}