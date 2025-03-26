#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, i, maxi = 0;
        scanf("%d", &n);

        int A[n];
        char res[n + 1];  // To store the result as a string
        res[n] = '\0';  // Null-terminate the string

        for (i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        for (i = 0; i < n; i++) {
            if (A[i] > maxi) {
                res[i] = '1';
                maxi = A[i];
            } else {
                res[i] = '0';
            }
        }

        // Print the result with spaces
        for (i = 0; i < n; i++) {
            printf("%c ", res[i]);
        }
        printf("\n");
    }

    return 0;
}
