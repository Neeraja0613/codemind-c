#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (m < n / 2.0) {  // Use 2.0 to ensure floating-point division
        printf("PRO\n");
    } else {
        printf("NEWBIE\n");
    }

    return 0;
}
