#include <stdio.h>
#include <stdlib.h>

const char* bal(int n, int c[]) {
    int r = 0, b = 0, x = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == 1) r++;
        else if (c[i] == 2) b++;
        else if (c[i] == 0) x++;
    }
    int diff = abs(r - b);
    if (diff <= x && (x - diff) % 2 == 0)
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int c[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &c[i]);
        }
        printf("%s\n", bal(n, c));
    }
    return 0;
}
