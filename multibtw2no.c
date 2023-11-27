#include<stdio.h>
int main()
{
	int i,n,e;
	scanf("%d%d",&n,&e);
	i=n;
	while(i<=e)
	{
		printf("%d\n",n*i);
		i++;
	}
}
