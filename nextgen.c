#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    
    // Calculate required and available power
    long long required_power = (long long) A * B;
    long long available_power = (long long) X * Y;

    // Check funding condition
    if (available_power >= required_power) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
