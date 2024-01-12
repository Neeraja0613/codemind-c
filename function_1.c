#include<stdio.h>
void rem(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	rem(a,b);
}
void rem(int a,int b)
{
	printf("%d",a%b);
}
