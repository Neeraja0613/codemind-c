#include <stdio.h>
#include <string.h>
const char* isBalanced(const char* s) {
    char st[1001];
    int top=-1;
    int len=strlen(s);
    int i;
    for (i=0;i<len;i++) {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[') 
		{
            st[++top]=s[i];
        } 
		else 
		{
            if(top==-1) 
			{
                return "NO";
            }
            if ((s[i]=='}' && st[top]=='{') || (s[i]==')' && st[top]=='(') || (s[i]==']' && st[top]=='[')) 
			{
                top--;
            } 
			else 
			{
                return "NO";
            }
        }
    }
    return top==-1?"YES":"NO";
}
int main() 
{
    char s[1001];
    printf("Enter an expression with brackets: ");
    scanf("%s", s);
    printf("%s\n",isBalanced(s));
}
