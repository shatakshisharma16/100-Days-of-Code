#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(number <0){
        printf("the number is megative");
    }
    if(number==0){
        printf("the number is zero");
    }
    else{
        printf("the number is positive");
    }
    return 0;
    }
