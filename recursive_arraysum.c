#include<stdio.h>
int sum(int *A,int i,int size)
{
	if(i==size)
	{
		return 0;
	}
    return A[i]+sum(A,i+1,size);
}
int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d ",sum(a,0,5));
}
