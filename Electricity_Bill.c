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
    else if(u>=600 && u<800)
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
        bill=(b*0.15);
    }
    else
    {
        bill=0;
    }
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",bill);
    printf("Total Amount: %.2f",b+bill);
}