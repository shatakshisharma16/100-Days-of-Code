#include<stdio.h>
int main () {
    int n;
    int pro=0;
    int count=0;
    int i=10;
    printf("enter a number:");
    scanf("%d",&n);
    while(count<n){
        if(n*2==i){
            pro*=i;
            count++;
        }
        printf("the product of first %d even number is %d",n,pro);
        i++;
    }
    return 0;
}