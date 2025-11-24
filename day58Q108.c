#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Compute product except self for each index
    for (int i = 0; i < n; i++) {
        int prod = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                prod *= nums[j];
            }
        }

        answer[i] = prod;
    }

    // Print the output array
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(" ");
    }

    return 0;
}
