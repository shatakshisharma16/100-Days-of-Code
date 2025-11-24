#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j = 0, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (i = length - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';   

    printf("Reversed string: %s\n", rev);

    return 0;
}
