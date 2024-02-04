#include<stdio.h>
int main()
{
	int r1,c1,i,j;
	printf("enter row & column size\n");
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	printf("enter the elements\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int r2,c2,k;
	printf("enter row & column size\n");
	scanf("%d%d",&r2,&c2);
	int b[r2][c2];
	printf("enter the elements\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int c[3][3]={0};
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];	    
			}
		}
	}
	printf("\nresultant matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
