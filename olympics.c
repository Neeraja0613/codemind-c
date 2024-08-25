#include <stdio.h>

int main(void) {
	// your code goes here
    int g,s,b;
    scanf("%d%d%d",&g,&s,&b);
    if((g+s+b)<15)
    printf("%d",15-(g+s+b));
    else
    printf("0");
}
