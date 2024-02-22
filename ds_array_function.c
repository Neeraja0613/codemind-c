#include<stdio.h>
void print_array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main()
{
	int A[5]={10,20,30,40,50};
	int B[3]={100,200,300};
	int C[7]={1,2,3,4,5,6,7};
	print_array(A,5);
	print_array(B,3);
	print_array(C,7);
}



/*
//with return type with arguments
#include<stdio.h>
int add(int a,int b)
{
	
}


//without return type with arguments
#include<stdio.h>
void add(int,int)
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int c=a+b;
	printf("%d",c);
}*/
