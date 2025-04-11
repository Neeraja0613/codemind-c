#include <stdio.h>

int main() {
    int a, b, x, y, p, q;
    scanf("%d %d %d %d %d %d", &a, &b, &x, &y, &p, &q);

    int total_score = (a > b ? a : b) + (x > y ? x : y) + (p > q ? p : q);
    printf("%d\n", total_score);

    return 0;
}
