#include<stdio.h>
int fact(int x,int y,int z)
{
	if((x+y)%z==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int res=fact(x,y,z);
	printf("%d",res);
}
