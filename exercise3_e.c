//3. e;
#include<stdio.h>
int main()
{
	int a,b,c,d,e,t;
	float avg;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	t=a+b+c+d+e;
	avg=t/5.0;
	printf("total marks: %d\n",t);
	printf("average: %.2f",avg);
}
