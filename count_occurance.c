#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int occur(char *str,int size,char target)
{
	int i,oc;
	for(i=0;i<size;i++)
	{
		if(str[i]==target)
		{
			oc++;
		}
	}
	return oc;
}
int main()
{
	int n;
	scanf("%d",&n);
	char string[n+1];
	scanf("%[^\n]s",string);
	char t;
	scanf("\n%c",&t);
	int result=occur(string,n,t);
	printf("%d",result);
	return 0;
}
