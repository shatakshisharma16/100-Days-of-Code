#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result[n];

    // For each element, find previous greater element
    for (int i = 0; i < n; i++) {
        int prev = -1;

        // Check all elements to the LEFT
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  // nearest previous greater, so stop
            }
        }

        result[i] = prev;
    }

    // Print output comma-separated
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i != n - 1)
            printf(",");
    }

    return 0;
}
