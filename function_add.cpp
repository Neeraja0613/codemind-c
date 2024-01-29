//with return type, without argument;
#include<stdio.h>
int add();
int main()
{
	int res=add();
	printf("%d",res);
}
int add()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int c=x+y;
	return c;
}

/* without return type, with argument;
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

