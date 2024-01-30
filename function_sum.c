#include<stdio.h>
int sum(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int res=sum(a,n);
	printf("%d",res);
}
