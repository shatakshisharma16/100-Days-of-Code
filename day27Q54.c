//Q54: Print the symmetric pyramid pattern (up then down).
#include <stdio.h>

int main() {
	int i, j;
	int n = 4; 
	for (i = 1; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
