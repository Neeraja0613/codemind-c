#include<stdio.h>
int cha(char ch)
{
	return ch-32;
}
int main()
{
	char ch;
	scanf("%c",&ch);
	int res=cha(ch);
	printf("%c",res);
}
