#include<stdio.h>
int reverse(int a)
{
	int c,b=0;
	while(a!=0)
	{
		c=a%10;
		b=b*10+c;
		a=a/10;
	}
	return b;
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
	{
		int res=reverse(n);
		if(prime(res))
		{
			printf("circular prime");
		}
		else
		{
			printf("prime but not circular prime");
		}
	}
	else
	{
		printf("not prime");
	}
}
