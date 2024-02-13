//4. e;
#include<stdio.h>
int main()
{
	int yr;
	scanf("%d",&yr);
	if(yr%400==0 || yr%4==0 && yr%100!=0)
	{
		printf("leap year");
	}
	else if(yr%100==0)
	{
		printf("not leap year");
	}
	else
	{
		printf("not leap year");
	}
}
