#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int acet[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&acet[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+acet[i];
	}
	printf("%d",sum);
}