#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (y % x == 0) {
        printf("%d\n", (y / x) - 1);
    } else {
        printf("%d\n", y / x);
    }

    return 0;
}
