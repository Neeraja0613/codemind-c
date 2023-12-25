#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	int j=n-1,t;
	while(i<=j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
