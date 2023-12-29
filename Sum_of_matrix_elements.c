#include<stdio.h>
int main()
{
	int r,c,i,j,rs=0,ts=0;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		rs=0;
		for(j=0;j<c;j++)
		{
			rs=rs+a[i][j];
		}
		ts=ts+rs;
	}
	printf("%d ",ts);
}