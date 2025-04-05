#include <stdio.h>

int count_ways(int n, int x) {
    int ec = n / 2;  // Even count
    int oc = (n % 2 == 0) ? ec : ec + 1;  // Odd count

    if (x % 2 == 0) {
        return ec - 1;
    } else {
        return oc - 1;
    }
}

int main() {
    int t, n, x;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &x);
        printf("%d\n", count_ways(n, x));
    }

    return 0;
}
