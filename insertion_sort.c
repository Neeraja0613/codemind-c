#include<stdio.h>
void print_array(int *a,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void insertion_sort(int *a,int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		int key,j;
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
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
	printf("Before Sorting: ");
	print_array(arr,n);
	insertion_sort(arr,n);
	printf("After Sorting: ");
	print_array(arr,n);
	return 0;
}
