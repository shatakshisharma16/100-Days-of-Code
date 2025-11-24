#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0;

    printf("Enter full name: ");
    scanf("%[^\n]s", str);

    // Print first initial
    if (str[0] != ' ')
        printf("%c ", str[0]);

    // Find initials of middle names
    while (str[i] != '\0') {

        // When a space is found, the next letter is an initial
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {

            // But do NOT print initial of last name yet
            // So check if this is the last word
            int k = i + 1;
            int isLast = 1;

            while (str[k] != '\0') {
                if (str[k] == ' ') {
                    isLast = 0;
                    break;
                }
                k++;
            }

            if (!isLast) {
                printf("%c ", str[i+1]); // print middle initial
            } else {
                start = i + 1; // store index of surname start
                break;
            }
        }
        i++;
    }

    // Print surname fully
    printf("%s\n", &str[start]);

    return 0;
}
