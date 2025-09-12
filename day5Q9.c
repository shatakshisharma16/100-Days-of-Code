#include <stdio.h>
int main(){
    int principal,rate,time,si,ci;
    printf("enter the principal amount\n");
    printf("enter the rate of interest\n");
    printf("enter the time in years\n");
    scanf("%d %d %d",&principal,&rate,&time);
    si=(principal*rate*time)/100;
    ci=principal*(1+rate/100)^time - principal;
    printf("simple interest is%d\n",si);
    printf("compund interest is%d\n",ci);
    return 0;
}