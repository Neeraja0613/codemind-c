#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j;
        scanf("%d%d",&n,&m);
        char s[1001];
        scanf("%s",s);
        char str[1001];
        scanf("%s",str);
        int min=m;
        for(i=0;i<=n-m;i++)
        {
            int dist=0;
            for(j=0;j<m;j++)
            {
                if(s[i+j]!=str[j]) 
                {
                    dist++;
                }
            }
            if(dist<min)
            min=dist;
        }
        printf("%d\n",min);
    }
}
