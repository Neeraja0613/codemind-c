#include<stdio.h>
int linear_search_ite(int *A,int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(A[i]==key)
		{
			return i;
		}
	}
	return -1;
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
	int key;
	scanf("%d",&key);
	int result=linear_search_ite(arr,n,key);
	if(result==-1) printf("Key not found");
	else printf("Key found at %d index",result);
}
