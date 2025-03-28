#include <stdio.h>

int main() {
    int act[] = {1, 2, 4};  // Array of activities
    int x, c = 0;
    
    scanf("%d", &x);

    for (int i = 0; i < 3; i++) {
        if (x >= act[i]) {
            x -= act[i];
            c++;
        } else {
            break;
        }
    }

    printf("%d\n", c);
    return 0;
}
