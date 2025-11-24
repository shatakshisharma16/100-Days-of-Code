#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[n];   // frequency array

    // Initialize freq with 0
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // Read array and detect repeated element in ONE iteration
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1) {   // already seen → repeated
            printf("%d", arr[i]);
            return 0;
        }

        freq[arr[i]]++;   // mark as seen
    }

    return 0;
}
