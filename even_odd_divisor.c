#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, ec = 0, oc = 0;
        scanf("%d", &n);

        for (int j = 1; j <= n; j++) {
            if (n % j == 0) {
                if (j % 2 == 0) {
                    ec++;
                } else {
                    oc++;
                }
            }
        }

        if (ec > oc) {
            printf("1\n");
        } else if (ec == oc) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
