#include<stdio.h>
int main()
{
    int n,r,flag=0;
    scanf("%d",&n);
    while(n!=0)
    {
    	r=n%10;
    	if(r==0)
    	{
    	     flag=1;
    	     break;
		}
		n=n/10;
	}
	if(flag==1)
	{
		printf("Duck number");
	}
	else
	{
		printf("Not Duck number");
	}
}
