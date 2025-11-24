#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    // If k is larger than n, no subarray exists
    if (k > n) {
        printf("-1\n");
        return 0;
    }

    int maxSum = -1000000;  // very small initial value

    // Check all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;

        // Sum of subarray arr[i] to arr[i+k-1]
        for (int j = i; j < i + k; j++)
            sum += arr[j];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d\n", maxSum);

    return 0;
}
