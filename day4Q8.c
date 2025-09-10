#include <stdio.h>
int main() {
    int n,sum;
    printf("enter a number\n");
    scanf("%d",&n);
    sum= n*(n+1)/2;
    printf("the sum of the first %d natural numbers is %d\n",n,sum);
    return 0;

}