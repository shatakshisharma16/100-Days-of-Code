#include <stdio.h>
int main () {
    int sec,min,hour;
    printf("enter the time in seonds\n");
    scanf("%d",&sec);
    hour=sec/(60*60);
    min=(sec-(hour*60*60))/60;
    sec=sec-(hour*60*60)-(min*60);
    printf("%d:%d:%d",hour,min,sec);
    return 0;
}