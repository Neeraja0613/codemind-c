#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Bitwise operators:\n");
	printf("AND: %d & %d = %d\n",a,b,a&b);
	printf("OR: %d | %d = %d\n",a,b,a|b);
	printf("XOR: %d ^ %d = %d\n",a,b,a^b);
	printf("Left Shift: %d << %d = %d\n",a,b,a<<b);
	printf("Right Shift: %d >> %d = %d",a,b,a>>b);
}
