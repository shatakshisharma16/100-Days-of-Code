#include<stdio.h>
int main () {
    int digit;
    char lower,upper;
    printf("enter anything");
    scanf("%c",&lower);
    scanf("%d",&digit);
    if(digit>=0 && digit<=9)
    printf("its a digit");
    else if(lower>='a' && lower<='z')
    printf("its a lower case alphabet");
    else 
    printf("its an upper case alphabet");
    return 0;
}