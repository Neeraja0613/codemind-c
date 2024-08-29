#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y,r;
        scanf("%d%d%d",&n,&x,&y);
        if(y>2*x)
        {
            r=(n/2)*y+(n%2)*x;
        }
        else
        {
            r=n*x;
        }
        printf("%d\n",r);
    }
}
