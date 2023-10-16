#include<stdio.h>
int main()
{
    int days,yrs,wks;
    scanf("%d",&days);
    yrs=days/365;
    wks=(days%365)/7;
    printf("%d
%d",yrs,wks);
}