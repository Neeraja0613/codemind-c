#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int slices=0;
        while(a!=b)
        {
            if(a>b)
            {
                int eat=(a+1)/2;
                slices+=eat;
                a=a-eat;
            }
            else
            {
                int eat=(b+1)/2;
                slices+=eat;
                b=b-eat;
            }
        }
        printf("%d\n",slices);
    }
}
