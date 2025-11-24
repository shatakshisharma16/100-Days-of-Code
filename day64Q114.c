#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];    // To store last seen index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0, maxLen = 0;

    for (int i = 0; i < strlen(s); i++) {
        // If character was seen before and is in current window
        if (lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1;
        }

        lastIndex[s[i]] = i;

        int currentLen = i - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("%d", maxLen);
    return 0;
}
