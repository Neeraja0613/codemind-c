#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int max=0,cur=0,s=0,j;
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=i;j<n;j++)
            {
                s+=a[j];
                if(s%2==0)
                {
                    cur=j-i+1;
                    if(cur>max)
                    {
                        max=cur;
                    }
                }
            }
        }
        printf("%d\n",max);
    }
}
