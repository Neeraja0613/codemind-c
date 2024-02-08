//3. c;
#include<stdio.h>
#include<math.h>
 int main()
 {
 	float r,c;
 	scanf("%f",&r);
 	c=3.14*r*r;
 	float a,sq;
 	scanf("%f",&a);
 	sq=a*a;
 	float l,b,rect;
 	scanf("%f%f",&l,&b);
 	rect=l*b;
 	float x,y,z,p,t;
 	scanf("%f%f%f",&x,&y,&z);
 	p=(x+y+z)/2;
 	t=sqrt(p*(p-x)*(p-y)*(p-z));
 	printf("area of circle: %.2f\n",c);
 	printf("area of square: %.2f\n",sq);
 	printf("area of rectangle: %.2f\n",rect);
 	printf("area of triangle: %.2f",t);
 }
