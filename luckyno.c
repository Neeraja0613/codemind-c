#include<stdio.h>
int main()
{
    int n,r,flag=0;
    scanf("%d",&n);
    while(n!=0)
    {
    	r=n%10;
    	if(r==4 || r==7)
    	{
    	     flag=1;
    	     break;
		}
		n=n/10;
	}
	if(flag==1)
	{
		printf("Lucky number");
	}
	else
	{
		printf("Not lucky number");
	}
}
