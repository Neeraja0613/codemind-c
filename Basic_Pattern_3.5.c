#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(n=0;n<r-i;n++)
        {
            printf("%c ",'A'+n);
        }
        printf("
");
    }
}