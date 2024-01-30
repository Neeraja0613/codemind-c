#include<stdio.h>
int main()
{
	int n,r,sum=0,i,s=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum>9)
	{
		while(sum!=0)
		{
			i=sum%10;
		    s=s+i;
		    sum=sum/10;
		}
	}
	printf("sum= %d",s);
}
