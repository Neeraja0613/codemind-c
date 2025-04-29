#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 8)
        printf("LESS\n");
    else if (n == 8)
        printf("PERFECT\n");
    else
        printf("MORE\n");
    return 0;
}
