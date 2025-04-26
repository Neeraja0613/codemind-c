#include <stdio.h>

int max_tri(int n) {
    for (int i = n; i >= 3; i--) {
        int a = i - 2;
        int b = i - 1;
        int c = i;
        if (a + b > c) {
            return a + b + c;
        }
    }
    return -1;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", max_tri(n));
    }
    return 0;
}
