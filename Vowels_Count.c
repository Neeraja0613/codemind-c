#include<stdio.h>
#include<string.h>
 int main()
{
    char str[100];  
    int i, vowels = 0;\n    scanf("%[^
]s",&str); 
    for(i=0;str[i];i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'|| str[i]=='u'||
        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
            vowels++;
        }
    }
    printf("%d",vowels);
    
    return 0;
}