#include<stdio.h>
int sum(int *ptr,int n)
{
	int sum=0,i;
	int max=*(ptr+0);
	for(i=1;i<n;i++)
	{
		if(max<*(ptr+i))
		{
			max=*(ptr+i);
		}
	}
	return max;
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
