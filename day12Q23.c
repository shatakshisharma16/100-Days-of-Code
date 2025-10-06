#include<stdio.h>
int main () {
    int day,cost;
    printf("enter day number:");
    scanf("%d", &day);
    if(day<=5)
    cost=day*2;
    else if(day>5 && day<=10)
    cost=(5*2)+(day-5)*4;
    else if(day>10 && day<=30)
    cost=(5*2)+(5*4)+(day-10)*6;
    else
    printf("membership cancelled");
    if(day<=30)
    printf("total cost is %d",cost);
    return 0;   
}