#include <stdio.h>
int main () {
int num1=3,num2=5;
printf("before swapping num1=%d num2=%d\n",num1,num2);
int temp;
temp=num1;
num1=num2;
num2=temp;
printf("after swapping the value num1=%d and num2=%d\n",num1,num2);
return 0;
}