#include <stdio.h>

int main(void) {
	// your code goes here
    int x;
    scanf("%d",&x);
    if(x%2==0)
    printf("%d",x/2);
    else
    printf("%d",(x/2)+1);
}
