#include <stdio.h>
int main() 
{
    int i;
    float f;
    char c;
    char s[50];
    scanf("%d",&i);
    scanf("%f",&f);
    scanf("%c",&c);
	scanf("%s",s);
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);
    printf("String: %s\n", s);
}
