/*#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++)
	{
		printf("Index=arr[%d]-->value:%d-->address:%d\n",i,arr[i],&arr[i]);
	}
	printf("%d\n",&arr);  //address (memory location) of arr
	printf("%d",sizeof(arr));  //each int variable=4B---> 5 variables=5*4=20
}*/


#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	//reading array elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printing array elements
	for(i=0;i<n;i++)
	{
		printf("Index=arr[%d]-->value:%d-->address:%d\n",i,arr[i],&arr[i]);
	}
}
