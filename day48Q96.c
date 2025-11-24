#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {

        // skip spaces
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // mark the start of a word
        start = i;

        // find the end of the word
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }

        end = i - 1;

        // reverse the word in place
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("Reversed each word: %s\n", str);

    return 0;
}
