#include<stdio.h>
void fun(int *A,int i,int size)
{
	if(i==size)
	{
		return;
	}
	printf("%d ",A[i]);
	fun(A,i+1,size);
}
int main()
{
	int arr[5]={1,2,3,4,5};
	fun(arr,0,5);
}
