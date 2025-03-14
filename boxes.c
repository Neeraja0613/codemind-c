#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y, K;
        scanf("%d %d %d", &x, &y, &K);
        
        int diff = abs(x - y);
        
        if (diff == K) {
            printf("0\n");
        } else if ((diff > K && (diff - K) % 2 == 0) || (diff < K && (K - diff) % 2 == 0)) {
            printf("%d\n", abs(diff - K) / 2);
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
