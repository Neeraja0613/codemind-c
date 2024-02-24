#include<stdio.h>
void print_array_ite(int *A,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",A[i]);
	}
}
void print_array_rec(int *A,int i,int size)
{
	if(i==size)
	{
		return;
	}
	printf("%d ",A[i]);
	print_array_rec(A,i+1,size);
}
int main()
{
	int a[5]={1,2,3,4,5};
	print_array_ite(a,5);
	printf("\n");
	print_array_rec(a,0,5);
}
