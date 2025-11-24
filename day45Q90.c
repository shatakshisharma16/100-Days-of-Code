#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // read full line

    while (str[i] != '\0') {
        // if lowercase → convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // if uppercase → convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
