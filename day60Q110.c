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

    if (k > n) {
        printf("-1\n");
        return 0;
    }

    // For each window of size k
    for (int i = 0; i <= n - k; i++) {

        int max = arr[i];  // assume first element of window is max

        // Check rest of the window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        // Print the max
        printf("%d ", max);
    }

    return 0;
}
