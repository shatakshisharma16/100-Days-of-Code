#include<stdio.h>
int main (){
    int value1,value2,value3;
    printf("enter vaulues");
    scanf("%d%d%d",&value1,&value2,&value3);
    if(value1>=value2 && value1>=value3)
        printf("%d is the largest",value1);
    else if(value2>=value1 && value2>=value3)
        printf("%d is the largest",value2);
    else
        printf("%d is the largest",value3);
    return 0;
}