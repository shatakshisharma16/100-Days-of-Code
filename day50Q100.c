#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // find length manually
    while (str[len] != '\0') {
        len++;
    }

    // generate all substrings
    for (i = 0; i < len; i++) {         // starting index
        for (j = i; j < len; j++) {     // ending index
            // print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
