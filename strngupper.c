//lowercase to uppercase of string without string.h()
#include<stdio.h>
int main()
{
	char str[20];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}

/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%[^\n]s",str);
	strupr(str);
	printf("%s",str);
}*/
