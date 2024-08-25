#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,m;
        scanf("%d%d%d%d",&a,&b,&c,&m);
        int x,y,flag=0;
        for(x=0;x<=m;x++)
        {
            for(y=0;y<=m-x;y++)
            {
                int z=m-x-y;
                if((a+x==b+y) || (a+x==c+z) || (b+y==c+z))
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
        printf("YES\n");
        else
        printf("NO\n");
    }
}

