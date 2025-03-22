#include <stdio.h>
#include <string.h>

void smallest_palindrome(int x, int y) {
    char a[1000] = "";
    int i;
    
    // Append '1' x/2 times
    for (i = 0; i < x / 2; i++) {
        strcat(a, "1");
    }
    // Append '2' y/2 times
    for (i = 0; i < y / 2; i++) {
        strcat(a, "2");
    }

    // Print the first half
    printf("%s", a);

    // Print the reversed half
    for (i = strlen(a) - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }

    printf("\n");
}

int main() {
    int t, x, y;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);
        smallest_palindrome(x, y);
    }

    return 0;
}
