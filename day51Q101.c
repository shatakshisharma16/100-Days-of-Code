#include <stdio.h>

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Scan the array once
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)      // first time we find the target
                first = i;
            last = i;             // keep updating last
        }
    }

    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index: %d\n", last);

    return 0;
}
