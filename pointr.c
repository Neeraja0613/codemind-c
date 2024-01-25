#include<stdio.h>
int main()
{
	int a[5]={1,2,3};
	int *ptr;
	ptr=a;
	printf("%d %d %d\n",ptr+0,ptr+1,ptr+2);
	printf("%d %d %d",a+0,a+1,a+2);
}

/*#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr;
	ptr=a;
	printf("%d %d %d",ptr,a,&a[0]);
}*/

/*#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d %d",a,&a[0]);
}*/
