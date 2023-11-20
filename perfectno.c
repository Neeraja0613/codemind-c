#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\n%d",sum);
}
