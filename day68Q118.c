#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Missing number
    int missing = totalSum - sum;

    printf("%d", missing);

    return 0;
}
