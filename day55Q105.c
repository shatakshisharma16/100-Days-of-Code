#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int majority = -1;

    // Check each element
    for (int i = 0; i < n; i++) {
        int count = 0;

        // count occurrences of nums[i]
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }

        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);
    return 0;
}
