//concortination of string without string.h()
#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	int i,len=0;
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		s1[len]=s2[i];
		len++;
	}
	s1[len]='\0';
	printf("%s",s1);
}

/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str1[20];
	scanf("%[^\n]s",str);
	scanf(" %[^\n]s",str1);
	strcat(str,str1);
	printf("%s",str);
	strcat(str1,str);
	printf("\n%s",str1);
}*/
