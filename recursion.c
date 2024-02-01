//recursion means calling function called itself
#include<stdio.h>
void acet()
{
	printf("Hello ");
	acet();
}
int main()
{
	acet();
}
