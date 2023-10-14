#include<stdio.h>
int main()
{
    float r,area,perimeter;
    scanf("%f",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("%.2f
%.2f",area,perimeter);
}