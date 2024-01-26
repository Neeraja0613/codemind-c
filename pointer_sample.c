#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int *ptr;
	ptr=&a;
	printf("%d\n",ptr);
	printf("%d\n",&a);
	printf("%d\n",a);
	printf("%d\n",*ptr);
}
