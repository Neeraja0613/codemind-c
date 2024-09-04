#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y,z;
        scanf("%d",&n);
        x=n/4;
        y=(n-(x*4))/2;
        z=x+y;
        printf("%d\n",z);
    }
}
