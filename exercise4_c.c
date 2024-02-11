//4. c;
#include<stdio.h>
int main()
{
    int u;
    float c,bill;
    scanf("%d",&u);
    if(u<200)
    {
        c=1.20;
    }
    else if(u>=200 && u<400)
    {
        c=1.40;
    }
    else if(u>=400 && u<600)
    {
        c=1.60;
    }
    else if(u>600 && u<800)
    {
    	c=1.80;
	}
    else
    {
        c=2.00;
    }
    float b=u*c;
    if(b>400)
    {
    bill=b*0.15;
    }
    else
    {
        bill=0;
    }
    printf("units consumed: %d\n",u);
    printf("cost per unit: %.2f\n",c);
    printf("bill: %.2f\n",b);
    printf("surcharge: %.2f\n",bill);
    printf("total amount: %.2f",b+bill);
}
