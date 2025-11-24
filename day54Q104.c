#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2; // total sum from 1 to n

    for (int x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = total - (x * (x - 1) / 2);

        if (left == right) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
