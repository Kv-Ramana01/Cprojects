#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j < n - i; j++) {
            printf("   "); // Print spaces for formatting
        }
        for (int j = 0; j <= i; j++) {
            printf("%6d", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}