#include<stdio.h>
char latin(int n)
{
	return 64+n;
}
int main()
{
	int n;
	scanf("%d",&n);
	char res=latin(n);
	printf("%c",res);
}
