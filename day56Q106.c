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

    // For each element, find next greater
    for (int i = 0; i < n; i++) {
        int next = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;   // nearest greater, so stop
            }
        }

        result[i] = next;
    }

    // Print comma-separated output
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i != n - 1)
            printf(",");   // comma except after last
    }

    return 0;
}
