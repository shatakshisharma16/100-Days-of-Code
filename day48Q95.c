#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, k, match;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    getchar();  // clear newline

    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    // Find lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // If lengths differ → not rotation
    if (len1 != len2) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Try all rotations
    for (i = 0; i < len1; i++) {
        match = 1;
        k = i;

        for (j = 0; j < len1; j++) {
            if (str1[k] != str2[j]) {
                match = 0;
                break;
            }
            k = (k + 1) % len1;   // rotate
        }

        if (match == 1) {
            printf("It IS a rotation.\n");
            return 0;
        }
    }

    printf("Not a rotation.\n");
    return 0;
}
