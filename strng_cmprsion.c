#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	int i=0,len1=0,len2=0;
	for(i=0;s1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		len2++;
	}
	printf("%d %d",len1,len2);
	i=0;
	int flag=0;
	if(len1!=len2)
	{
		printf("both are not same");
	}
	else
	{
		while(s1[i]!='\0' && s2[i]!='\0')
		{
			if(s1[i]!=s2[i])
			{
				flag=1;
				break;
			}
			i++;
		}
	}
	if(flag==0)
	{
		printf("\nboth are same");
	}
	else
	{
		printf("\nnot same");
	}
}
