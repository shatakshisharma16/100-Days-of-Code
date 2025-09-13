#include<stdio.h>
int main () {
    int year;
    scanf("%d",&year);
    if((year%4==0 ))
    printf("its a leap year");
    else if(year%400==0)
    printf("its a leap year");
    else
    printf("it is not a leap year");
    return 0;
}