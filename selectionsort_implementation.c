#include<stdio.h>
void print_array(int *a,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
void selection_sort(int *a,int n)
{
	int i,j;
	int min=i;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			int t=a[i];
			a[i]=a[min];
			a[min]=t;
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
	printf("Before Sorting: ");
	print_array(arr,n);
	bubble_sort(arr,n);
	printf("After Sorting: ");
	print_array(arr,n);
	return 0;
}
