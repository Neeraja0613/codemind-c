//untyped pointer or void pointer or generic pointer
#include<stdio.h>
int main()
{
	char a='a';
	void *ptr;
	ptr=&a;
	printf("%c\n",*(char *)ptr);
}
