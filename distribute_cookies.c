#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(m<n)
        {
            printf("%d\n",n-m);
        }
        else
        {
            int r=m%n;
            int add=n-r, rem=r;
            int min=add;
            if(rem<add)
            min=rem;
            printf("%d\n",min);
        }
    }
}
