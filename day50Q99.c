#include <stdio.h>

int main() {
    char date[20];
    char day[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%[^\n]s", date);

    // extract day (first two characters)
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    // extract year (characters after 5th index)
    int i = 0, j = 6;
    while (date[j] != '\0') {
        year[i] = date[j];
        i++;
        j++;
    }
    year[i] = '\0';

    // Print in new format
    printf("%s-Apr-%s\n", day, year);

    return 0;
}
