//2. f:
#include<stdio.h>
#include<math.h>
int main()
{ 
 float p,t,r,si,ci;
 scanf("%f%f%f",&p,&t,&r);
 si=(p*t*r)/100;
 ci=p*(pow((1+r/100),t))-p;
 printf("simple interest: %.2f\n",si);
printf("compound interest: %.2f",ci);
}
