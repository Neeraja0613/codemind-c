#include <stdio.h>

int main(void) {
	// your code goes here
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,r;
        scanf("%d",&x);
        r=x%10;
        if(r==0)
        {
            printf("%d\n",100-((x/10)*10));
        }
        else
        {
            printf("%d\n",100-(((x/10)+1)*10));
        }
    }
}
