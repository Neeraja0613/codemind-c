#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 8) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
