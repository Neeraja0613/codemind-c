#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    
    printf("%d\n", (x - (n * 10)) / 20);
    
    return 0;
}
