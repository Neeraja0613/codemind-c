#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k, min, max;
        scanf("%d %d", &n, &k);

        min = 10 * n;
        max = 12 * n;

        if (k >= min && k <= max) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
