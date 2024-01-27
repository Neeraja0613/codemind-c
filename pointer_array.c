#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	int *ptr;
	ptr=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("address:%d--->value:%d\n",ptr+i,*(ptr+i));
	}
}
