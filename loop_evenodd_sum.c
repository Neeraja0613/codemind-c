#include<stdio.h>
int main()
{
	int i,n,esum=0,osum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
	}
	printf("even sum: %d\n",esum);
	printf("odd sum: %d\n",osum);
	printf("total sum: %d",esum+osum);
}
