#include<stdio.h>
int main()
{
	char str[20];
	scanf("%[^
]s",str);
	int i;
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
