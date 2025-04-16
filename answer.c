#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);

    if (abs(x - y) <= k) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
