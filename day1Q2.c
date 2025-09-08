#include <stdio.h>
int main () {
    int a,b,sum,diff,mul,quot;
    printf("enter two numbers;");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    quot=a/b;
    printf("sum is %d\n",sum);
    printf("diffrenece is%d\n",diff);
    printf("multiplcation is %d\n",mul);
    printf("quotient is %d\n",quot);
    return 0;
}