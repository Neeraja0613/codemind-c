#include<stdio.h>
int main()
{
	char ch;
	char s[1000];
	char str[10000];
	scanf("%c\n%s\n%[^\n]s",&ch,s,str);
	printf("%c\n%s\n%s",ch,s,str);
}
