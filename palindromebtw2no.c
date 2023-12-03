#include<stdio.h>
int main()
{
	int i,n,x,r,t,rev=0;
	scanf("%d%d",&n,&x);
	for(i=n;i<=x;i++)
	{
	  	rev=0;
		t=i;
	    while(t!=0)
	    {   
		   r=t%10;
		   rev=rev*10+r;
		   t=t/10;
	    }
	    if(rev==i)
	    {
		   printf("%d ",i);
	    }
    }
}
