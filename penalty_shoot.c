#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int diff=x-y;
        if(diff>=-2 && diff<=1)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
