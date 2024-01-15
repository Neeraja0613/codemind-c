#include<stdio.h>
void dig(int n)
{
	printf("%d",n%10);
}
int main()
{
	int n;
	scanf("%d",&n);
	dig(n);
}
