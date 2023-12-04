#include<stdio.h>     
int main()
{
	int i,j,n,c=0,np=0,bp=0;
	scanf("%d",&n);
	for(i=n+1;;i++)    
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			np=i;
			break;
		}
	}
	printf("np: %d\n",np);
	for(i=n-1;;i--)    
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			bp=i;
			break;
		}
	}
	printf("bp: %d\n",bp);
	if((np-n)==(n-bp))
	{
		printf("nearest prime: %d %d",bp,np);
	}
	else if((np-n)>(bp-n))
	{
		printf("nearest prime: %d",bp);
	}
	else
	{
		printf("nearest prime: %d",np);
	}
}
