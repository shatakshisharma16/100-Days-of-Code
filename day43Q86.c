#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    
    while (str[length] != '\0') {
        length++;
    }

    j = length - 1;  

    
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is NOT a palindrome.\n");

    return 0;
}
