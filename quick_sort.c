#include<stdio.h>
void print_array(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int partition(int *a,int l,int h)
{
	int result[h-l+1];
	int pivot=a[l];
	int k=0,i;
	//bringin' elemente <= pivot 
	for(i=l+1;i<=h;i++)
	{
		if(a[i]<=pivot)
		{
			result[k]=a[i];
			k++;
		}
	}
	int d=l+k;  //storing index
	result[k]=pivot;
	k++;
	//bringin' elemente > pivot
	for(i=l+1;i<=h;i++)
	{
		if(a[i]>pivot)
		{
			result[k]=a[i];
			k++;
		}
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		a[i]=result[k];
		k++;
	}
	return d;
}
void quick_sort(int *a,int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		quick_sort(a,l,p-1);
		quick_sort(a,p+1,h);
	}
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
	printf("Before Sorting: ");
	print_array(a,n);
	quick_sort(a,0,n-1);
	printf("After Sorting: ");
	print_array(a,n);
}
