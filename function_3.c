#include<stdio.h>
int cha(char ch)
{
	return ch;
}
int main()
{
	char ch;
	scanf("%c",&ch);
	int res=cha(ch);
	printf("%d",res);
}
