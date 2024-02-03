#include<stdio.h>
int main()
{
	int r,c;
	printf("enter row & column size\n");
	scanf("%d%d",&r,&c);
	printf("enter matrix elements\n");
	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("printing the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
