#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d,i;
        scanf("%d%d",&n,&d);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int curr=0,switches=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=d)
            {
                if(curr==1)
                {
                    switches++;
                    curr=0;
                }
            }
            else
            {
                if(curr==0)
                {
                    switches++;
                    curr=1;
                }
            }
        }
        printf("%d\n",switches);
    }
}
