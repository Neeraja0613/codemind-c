#include<stdio.h>
int main()
{
    int T,S,B,cap,res;
    scanf("%d%d%d",&T,&S,&B);
    cap=2*T*S*B*512;
    res=cap/1024;
    printf("%d KB",res);
}