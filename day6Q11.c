#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(number/2*2==number){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    
    return 0;
}