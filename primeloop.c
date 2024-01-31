#include<stdio.h>
int main()
{
	int i,j,n,c=0;  //for b/w 2 no.----> n,x
	scanf("%d",&n);  //%d%d,&n,&x
	for(i=1;i<=n;i++)  //i=n;i<=x;i++
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
			printf("%d ",i);
		}
	}
}

/*
#include<stdio.h>
int main()
{
	int i,n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
			printf("%d ",i);
		}
	}
	printf("\nfactors: %d\n",c);
	if(c==2)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}
*/
