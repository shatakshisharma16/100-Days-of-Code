#include<stdio.h>
int main () {
    int n;
    int sum=0;
    int count=0;
    int i=10;
    printf("enter a number:");
    scanf("%d",&n);
    while (count<n){
        if(i%2!=0){
            sum += i;
            count++;
        }
        i++;
    }
    printf("the sum of first %d odd numbers is %d",n,sum);
    return 0;
}