#include<stdio.h>
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
	int n,r,dc=0,pc=0;
	scanf("%d",&n);
	if(prime(n))
	{
		while(n>0)
		{
			r=n%10;
			if (prime(r))
			{
				pc=pc+1;
			}
			dc=dc+1;
			n=n/10;
		}
		if(dc==pc)
		{
			printf("mega prime");
		}
		else
		{
			printf("not mega prime");
		}
	}
	else
	{
		printf("not prime");
	}
}
