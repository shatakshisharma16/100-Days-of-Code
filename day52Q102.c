#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = -1;

    // Find first element >= x
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;   // stop at first occurrence
        }
    }

    printf("Ceil index: %d\n", index);

    return 0;
}
