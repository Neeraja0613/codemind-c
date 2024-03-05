#include<stdio.h>
void print_array(int *A,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
void merge(int *A,int l,int m,int h)
{
	int result[h-l+1];
	int i=l,j=m+1,k=0;
	while(i<=m && j<=h)
	{
		if(A[i]<=A[j])
		{
			result[k]=A[i];
			i++;
			k++;
		}
		else
		{
			result[k]=A[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		result[k]=A[i];
		i++;
		k++;
	}
	while(j<=h)
	{
		result[k]=A[j];
		j++;
		k++;
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		A[i]=result[k];
		k++;
	}
}
void merge_sort(int *A,int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		merge_sort(A,l,m);
		merge_sort(A,m+1,h);
		merge(A,l,m,h);
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before Sorting: ");
	print_array(a,n);
	merge_sort(a,0,n-1);
	printf("After Sorting: ");
	print_array(a,n);
}
