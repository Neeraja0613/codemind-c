#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int it=10,d=100;
        int dist=x*it;
        int min=y*10-dist;
        int n=100-y;
        int res=(min+n-1)/n;
        printf("%d\n",res);
    }
}
