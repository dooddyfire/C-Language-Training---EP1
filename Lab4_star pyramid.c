#include <stdio.h>

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    // Ascending pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Descending pattern
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}