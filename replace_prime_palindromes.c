#include<stdio.h>
int is_prime(int n)
{
	int i,fc=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
	}
	return fc==2;
}
int reverse(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
void replace(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(is_prime(arr[i])==1 && arr[i]==reverse(arr[i]))
		{
			arr[i]=-1;
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	replace(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
