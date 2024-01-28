#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("%d %d",a,b);
}
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
	printf("%d %d\n",*x,*y);
}                      

/*#include<stdio.h>
void swap(int,int);
int main()
{
	int a=10,b=20;
	swap(a,b);
	printf("%d %d",a,b);
}
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	printf("%d %d\n",a,b);
}*/
