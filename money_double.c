#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,i;
        scanf("%d%d",&x,&y);
        for(i=0;i<y;i++)
        {
            if((x+1000)>(2*x))
            x=x+1000;
            else
            x=x*2;
        }
        printf("%d\n",x);
    }
}
