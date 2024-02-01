/*//malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}*/

/*//calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d   %d\n",ptr+i,*(ptr+i));
	}
	free(ptr);
	for(i=0;i<n;i++)
	{
		printf("%d   %d\n",ptr+i,*(ptr+i));
	}
}*/

//realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	int n1;
	scanf("%d",&n1);
	ptr=realloc(ptr,n1);
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
		sum+=*(ptr+i);
	}
	printf("%d",sum);
}
