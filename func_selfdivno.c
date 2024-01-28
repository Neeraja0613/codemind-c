#include<stdio.h>
int self(int);
int main()
{
	int n,f=1,r,t;
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		if(r==0 || t%r!=0)
		{
			f=0;
			break;
		}
		n=n/10;
	}
	if(f==1)
	{
		printf("self dividing");
	}
	else
	{
		printf("not self dividing");
	}
}
