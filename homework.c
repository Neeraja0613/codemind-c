#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (10 * y + x >= 100) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
