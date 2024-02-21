#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp,j=n-1;
	i=0;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


/*#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[n],j=0;
	for(i=n-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}*/


/*#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}*/



/*#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}*/
