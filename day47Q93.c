#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    getchar(); // clear newline

    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    // Count frequency of characters in first string
    i = 0;
    while (str1[i] != '\0') {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z')
            freq1[ch - 'a']++;
        if (ch >= 'A' && ch <= 'Z')
            freq1[ch - 'A']++;
        i++;
    }

    // Count frequency of characters in second string
    i = 0;
    while (str2[i] != '\0') {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z')
            freq2[ch - 'a']++;
        if (ch >= 'A' && ch <= 'Z')
            freq2[ch - 'A']++;
        i++;
    }

    // Compare both frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings ARE anagrams.\n");
    return 0;
}
