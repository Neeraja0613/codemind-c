#include<stdio.h>
int main()
{
	int n1,n2,r,n,d,lcm,gcd;
	scanf("%d%d",&n1,&n2);
	n=(n1>n2)?n1:n2;
	d=(n1<n2)?n1:n2;
	r=n%d;
	while(r!=0)
	{
		n=d;
		d=r;
		r=n%d;
	}
	gcd=d;
	lcm=(n1*n2)/gcd;
	printf("%d %d",lcm,gcd);
}
