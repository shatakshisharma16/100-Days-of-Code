#include <stdio.h>

int main() {
    int m, n;

    // Input size of first array
    scanf("%d", &m);
    int a[m];

    // Input first sorted array
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    scanf("%d", &n);
    int b[n];

    // Input second sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int merged[m + n];   // Merged array
    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements from a[]
    while (i < m) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements from b[]
    while (j < n) {
        merged[k++] = b[j++];
    }

    // Print merged sorted array
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
