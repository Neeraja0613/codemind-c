#include <stdio.h>

int main() {
    int a, x, y;
    scanf("%d %d %d", &a, &x, &y);

    if (a > x + y) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
