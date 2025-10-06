#include<stdio.h>
int main () {
    int sub,add,div,mul,num1,num2;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\nenter your choice:");
    scanf("%d",&sub);
    switch(sub){
        case 1:
            add=num1+num2;
            printf("addition is %d",add);
            break;
        case 2:
            sub=num1-num2;
            printf("subtraction is %d",sub);
            break;
        case 3:
            mul=num1*num2; 
            printf("multiplication is %d",mul);
            break;
        case 4:     
            if(num2!=0){
                div=num1/num2;
                printf("division is %d",div);
            }
            else
                printf("division by zero is not possible");
            break;
        default:
            printf("invalid choice");   
        }
            return 0;            
}