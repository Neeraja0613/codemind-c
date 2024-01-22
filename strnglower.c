//uppercase to lowercase of string without string.h()
#include<stdio.h>
int main()
{
	char str[20];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
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
	strlwr(str);
	printf("%s",str);
}*/
