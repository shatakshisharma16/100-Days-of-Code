#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {

        // build each word character-by-character
        if (str[i] != ' ') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';   // end current word

            if (j > maxLen) {
                maxLen = j;
                int k = 0;
                while (word[k] != '\0') {   // copy to longest
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }

            j = 0;  // reset for next word
        }

        i++;
    }

    // Check last word (if sentence doesn’t end with a space)
    word[j] = '\0';
    if (j > maxLen) {
        int k = 0;
        while (word[k] != '\0') {
            longest[k] = word[k];
            k++;
        }
        longest[k] = '\0';
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
