#include<stdio.h>
int main()
{
    int h,t,s;
    scanf("%d%d%d",&h,&t,&s);
    if(h>50 && t>60 && s>100)
    {
        printf("10");
    }
    else if(h>50 && t>60)
    {
        printf("9");
    }
    else if(t>60 && s>100)
    {
        printf("8");
    }
    else if(h>50 && s>100)
    {
        printf("7");
    }
    else if(h>50 || t>60 || s>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}