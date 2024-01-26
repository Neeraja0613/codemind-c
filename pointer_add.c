#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("%d",*ptr1+ *ptr2);
}
