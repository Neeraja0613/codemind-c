#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, i, tot = 0, mini;
        scanf("%d %d", &n, &x);

        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            tot += a[i];  // Calculate sum of array elements
        }

        mini = (tot + x - 1) / x;  // Equivalent to ceil(tot / x)
        printf("%d\n", mini);
    }

    return 0;
}
