#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};   // for a–z
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {   // only lowercase alphabet
            freq[ch - 'a']++;          // increase count

            if (freq[ch - 'a'] == 2) { // repeating found
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
