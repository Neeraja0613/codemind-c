#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int min_cost = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x >= 7 && y < min_cost) {
                min_cost = y;
            }
        }
        if (min_cost != INT_MAX)
            printf("%d\n", min_cost);
        else
            printf("-1\n");
    }
    return 0;
}
