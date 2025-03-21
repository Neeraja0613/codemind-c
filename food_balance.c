#include <stdio.h>
#include <stdlib.h>  // For abs() function

int main() {
    int f1, p1, f2, p2;
    scanf("%d %d %d %d", &f1, &p1, &f2, &p2);

    int diff1 = abs(f1 - p1);
    int diff2 = abs(f2 - p2);

    if (diff1 < diff2) {
        printf("First\n");
    } else if (diff1 > diff2) {
        printf("Second\n");
    } else {
        printf("Both\n");
    }

    return 0;
}
