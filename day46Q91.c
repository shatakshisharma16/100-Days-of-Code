#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {

        // check if character is NOT a vowel
        if (!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
              str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')) {

            result[j] = str[i];   // copy non-vowel
            j++;
        }

        i++;
    }

    result[j] = '\0';   // end string

    printf("String without vowels: %s\n", result);

    return 0;
}
