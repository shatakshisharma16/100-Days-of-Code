#include<stdio.h>
int main () {
    int monthnumber,year;
    printf("enter the month number:");
    scanf("%d",&monthnumber);
    printf("enter the year:");
    scanf("%d",&year);
    switch (monthnumber) {
        case 1:
        printf("january has 31 days");
        break;
        case 2:
        if((year%4==0 && year%100!=0) || (year%400==0))
            printf("february has 29 days");
        else
            printf("february has 28 days");
        break;
        case 3 :
        printf("march has 31 days");
        break;
        case 4:
        printf("april has 30 days");
        break;
        case 5:
        printf("may has 31 days");
        break;
        case 6:
        printf("june has 30 days");
        break;
        case 7:
        printf("july has 31 days");
        break;
        case 8:
        printf("august has 31 days");
        break;
        case 9:
        printf("september has 30 days");
        break;
        case 10:
        printf("october has 31 days");
        break;
        case 11:
        printf("november has 30 days");
        break;
        case 12:
        printf("december has 31 days");
        break;
        default:
        printf("invaild no of days");
    }
    return 0;
}