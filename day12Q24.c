#include<stdio.h>
int main () {
    int units,bill;
    printf("enter units consumed:");
    scanf("%d", &units);
    if(units<=100)
        bill=units*5;
    else if(units>100 && units<=200)
        bill=(100*5)+(units-100)*7;
    else if(units>200 && units<=300)
        bill=(100*5)+(100*7)+(units-200)*10;
    else
        bill=(100*5)+(100*7)+(100*10)+(units-300)*15;
    printf("total bill is %d",bill);
    return 0;

}