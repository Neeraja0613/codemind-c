#include <stdio.h>

int main(void) {
	// your code goes here
    int a,b,c,x;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    int cd_vol=a*b*c;
    int c_vol=x*x*x;
    if(cd_vol>c_vol)
    printf("Cuboid");
    else if(cd_vol==c_vol)
    printf("Equal");
    else
    printf("Cube");
}
