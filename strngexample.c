/*#include<stdio.h>
int main()
{
	char str[];          //to read along with spaces until new line given
	scanf("%s",str);     //scanf("%[^\n]s",str)
	printf("%s",str);
}

/*for reading, got 3 predefined functions
1. scanf()
2. gets()
3. getchar()
printing string
1. printf()
2. puts()
3. putchar()*/

#include<stdio.h>
int main()
{
	char str[20];
	gets(str);
	puts(str);
}
