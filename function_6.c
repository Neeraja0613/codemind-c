#include<stdio.h>
int pro(int a,int b)
{
	return a*b;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=pro(a,b);
	printf("%d",res);
}
